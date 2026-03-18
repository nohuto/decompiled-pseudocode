/*
 * XREFs of NtUserInjectGesture @ 0x1C01FD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _PostMessageCheckIL @ 0x1C01E2048 (_PostMessageCheckIL.c)
 *     AllocGestureInfo @ 0x1C0227058 (AllocGestureInfo.c)
 *     ValidateGestureCaller @ 0x1C0227698 (ValidateGestureCaller.c)
 *     ValidateGestureInfo @ 0x1C022774C (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserInjectGesture(__int64 a1, int a2, __int64 a3, ULONG64 a4, volatile void *Address)
{
  volatile void *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG64 v18; // rcx
  SIZE_T v19; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  _BYTE v27[8]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-98h]
  __int128 v30; // [rsp+68h] [rbp-90h] BYREF
  __int128 v31; // [rsp+78h] [rbp-80h]
  __int128 v32; // [rsp+88h] [rbp-70h]
  SIZE_T v33; // [rsp+98h] [rbp-60h]
  __int128 v34; // [rsp+A8h] [rbp-50h]
  __int128 v35; // [rsp+B8h] [rbp-40h]
  __int128 v36; // [rsp+C8h] [rbp-30h]
  SIZE_T Length; // [rsp+D8h] [rbp-20h]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v28;
    *((_QWORD *)&v28 + 1) = v10;
    HMLockObject(v10);
    if ( a3 || !a4 || a2 )
    {
      v13 = 87LL;
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( *(char *)(v14 + 20) >= 0 && *(char *)(v14 + 19) >= 0 )
      {
        if ( !(unsigned int)ValidateGestureCaller(gptiCurrent, v10) )
        {
LABEL_9:
          LODWORD(v10) = 0;
LABEL_26:
          ThreadUnlock1(v16, v15, v17);
          goto LABEL_27;
        }
        v18 = a4 + 56;
        if ( a4 + 56 < a4 || v18 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v34 = *(_OWORD *)a4;
        v35 = *(_OWORD *)(a4 + 16);
        v36 = *(_OWORD *)(a4 + 32);
        Length = *(_QWORD *)(a4 + 48);
        v30 = v34;
        v31 = v35;
        v32 = v36;
        v33 = Length;
        v19 = (unsigned int)Length;
        if ( (_DWORD)Length )
        {
          if ( Address )
            goto LABEL_18;
        }
        else if ( !Address )
        {
LABEL_18:
          if ( Address )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
            ProbeForRead(Address, v19, CurrentProcessWow64Process != 0 ? 1 : 4);
            v9 = Address;
          }
          if ( (unsigned int)ValidateGestureInfo(&v30) )
          {
            v21 = AllocGestureInfo(v10, 0LL, &v30, v9);
            v22 = v21;
            if ( v21 )
            {
              EtwTracePostInjectedGestureMessage(v10, v21);
              v23 = _HMObjectFromHandle(v22);
              LODWORD(v10) = PostMessageCheckIL((struct tagWND *)v10, 281LL, *(unsigned int *)(v23 + 40), v22);
              if ( !(_DWORD)v10 )
                FreeGestureInfo(v22, 1LL, v17, v24);
              goto LABEL_26;
            }
          }
          goto LABEL_9;
        }
        LODWORD(v10) = 0;
        UserSetLastError(87LL, v15, v17);
        goto LABEL_26;
      }
      v13 = 1400LL;
    }
    LODWORD(v10) = 0;
    UserSetLastError(v13, v11, v12);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v25);
  return (int)v10;
}
