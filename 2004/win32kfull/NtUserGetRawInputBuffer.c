/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C01FC080
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0006700 (FreeHidData.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0157ED0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int *v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *i; // r14
  __int64 *v16; // rbx
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // [rsp+20h] [rbp-C8h]
  unsigned int v24; // [rsp+24h] [rbp-C4h]
  unsigned int v25; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-88h]
  __int64 *v27; // [rsp+68h] [rbp-80h]
  unsigned int **v28; // [rsp+70h] [rbp-78h]
  _BYTE v29[32]; // [rsp+78h] [rbp-70h] BYREF
  char v30[80]; // [rsp+98h] [rbp-50h] BYREF

  v24 = 0;
  v5 = 0;
  v23 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  if ( a3 == 24 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v25 = *v9;
    v11 = gptiCurrent;
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v30, v12);
    v28 = (unsigned int **)(v12 + 24);
    for ( i = *(__int64 **)(v12 + 24); i; i = v16 )
    {
      v16 = (__int64 *)*i;
      v27 = (__int64 *)*i;
      if ( *((_DWORD *)i + 6) == 255 )
      {
        v17 = HMValidateHandle(i[5], 0x12u);
        v26 = v17;
        if ( v17 )
        {
          v5 = (*(_DWORD *)(v17 + 36) + 7) & 0xFFFFFFF8;
          if ( v5 + v24 <= v24 )
            goto LABEL_27;
          v18 = a1;
          if ( !a1 || v5 + v24 > v10 )
            goto LABEL_16;
          ProbeForWrite(a1, v5, 4u);
          memmove(a1, (const void *)(v26 + 32), *(unsigned int *)(v26 + 36));
          ++v23;
          a1 += v5;
          v24 += v5;
          FreeHidData(v26);
          v11 = gptiCurrent;
          v16 = v27;
        }
        *(_DWORD *)(v11 + 560) = *((_DWORD *)i + 12);
        DelQEntry(v28, (unsigned int *)i, 1);
        EtwTraceInputProcessDelay(v11);
        *(_DWORD *)(*(_QWORD *)(v11 + 424) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v10 = v25;
      }
    }
    v18 = a1;
LABEL_16:
    if ( !i && v18 )
      ClearWakeBit(gptiCurrent, 1024, 0);
    if ( v10 <= v5 )
    {
      if ( v18 )
        UserSetLastError(122LL, v13, v14);
    }
    else if ( v18 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      v6 = v23;
      goto LABEL_27;
    }
    v6 = -(v18 != 0LL);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v5;
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v20, v19, v21);
  return v6;
}
