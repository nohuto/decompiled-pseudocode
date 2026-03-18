/*
 * XREFs of ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F5F58
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0146740 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0074EB4 (xxxCallNextHookEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C00BC9CC (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00BCA18 (RtlInitLargeAnsiString.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTCREATESTRUCT(__int64 a1, __int64 a2, struct tagCBT_CREATEWNDW *a3, int a4)
{
  struct tagCBT_CREATEWNDW *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int128 v14; // [rsp+28h] [rbp-A0h]
  _OWORD v15[8]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, 0x70uLL);
  v6 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v6 = (struct tagCBT_CREATEWNDW *)MmUserProbeAddress;
  v14 = *(_OWORD *)v6;
  v7 = *(_OWORD **)v6;
  if ( *(_QWORD *)v6 >= MmUserProbeAddress )
  {
    *(_DWORD *)MmUserProbeAddress = 0;
    v7 = (_OWORD *)v14;
  }
  *v7 = *v7;
  v7[1] = v7[1];
  v7[2] = v7[2];
  v7[3] = v7[3];
  v7[4] = v7[4];
  v8 = v14;
  v15[0] = *(_OWORD *)v14;
  v15[1] = *(_OWORD *)(v14 + 16);
  v15[2] = *(_OWORD *)(v14 + 32);
  v15[3] = *(_OWORD *)(v14 + 48);
  v15[4] = *(_OWORD *)(v14 + 64);
  v9 = *((_QWORD *)&v15[3] + 1);
  if ( !a4 )
  {
    if ( *((_QWORD *)&v15[3] + 1) )
    {
      if ( (BYTE8(v15[3]) & 1) != 0 )
        goto LABEL_18;
      v9 = *((_QWORD *)&v15[3] + 1);
      v8 = v14;
    }
    RtlInitLargeUnicodeString((__int64)&v15[5], v9);
    v11 = *(_QWORD *)&v15[4];
    if ( (*(_QWORD *)&v15[4] & 0xFFFFFFFFFFFF0000uLL) == 0 )
      goto LABEL_21;
    if ( *(_QWORD *)&v15[4] )
    {
      if ( (v15[4] & 1) != 0 )
LABEL_18:
        ExRaiseDatatypeMisalignment();
      v11 = *(_QWORD *)&v15[4];
      v8 = v14;
    }
    RtlInitLargeUnicodeString((__int64)&v15[6], v11);
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v15[3] + 1) )
  {
    v9 = *((_QWORD *)&v15[3] + 1);
    v8 = v14;
  }
  RtlInitLargeAnsiString((__int64)&v15[5], v9);
  v10 = *(_QWORD *)&v15[4];
  if ( (*(_QWORD *)&v15[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_QWORD *)&v15[4] )
    {
      v10 = *(_QWORD *)&v15[4];
      v8 = v14;
    }
    RtlInitLargeAnsiString((__int64)&v15[6], v10);
  }
LABEL_21:
  v12 = xxxCallNextHookEx();
  *((_QWORD *)a3 + 1) = *((_QWORD *)&v14 + 1);
  *(_OWORD *)(v8 + 32) = v15[2];
  return v12;
}
