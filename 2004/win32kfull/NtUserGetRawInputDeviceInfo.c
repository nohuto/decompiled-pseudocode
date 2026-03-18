/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C01FC400
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(unsigned __int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r12d
  int v19; // r12d
  int v20; // r12d
  _BYTE *v21; // rdx
  _BYTE *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v27[40]; // [rsp+58h] [rbp-40h] BYREF

  v8 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v9 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  v12 = HMValidateHandle(a1, 0x13u);
  if ( !v12 )
  {
    v14 = 6LL;
LABEL_5:
    UserSetLastError(v14, v11, v13);
    v8 = -1;
    goto LABEL_52;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_BYTE *)(v12 + 48) == 2 )
        v15 = *(_DWORD *)(*(_QWORD *)(v12 + 464) + 104LL);
      else
        v15 = 0;
      break;
    case 536870919:
      v15 = (*(unsigned __int16 *)(v12 + 208) >> 1) + 1;
      break;
    case 536870923:
      v15 = 32;
      break;
    case 536870924:
      v15 = 44;
      break;
    default:
      v14 = 87LL;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v15;
    goto LABEL_52;
  }
  if ( (unsigned int)v10 >= v15 )
  {
    ProbeForWrite((volatile void *)a3, v10, 4u);
    v18 = a2 - 536870917;
    if ( !v18 )
    {
      if ( *(_BYTE *)(v12 + 48) == 2 )
        memmove((void *)a3, *(const void **)(*(_QWORD *)(v12 + 464) + 16LL), v15);
      goto LABEL_48;
    }
    v19 = v18 - 2;
    if ( v19 )
    {
      v20 = v19 - 4;
      if ( !v20 )
      {
        if ( (_DWORD)v10 != v15 )
          goto LABEL_27;
        if ( (a3 & 3) == 0 )
        {
          v22 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v22 = (_BYTE *)MmUserProbeAddress;
          *v22 = *v22;
          v22[31] = v22[31];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_DWORD *)a3 = v15;
          if ( *(_BYTE *)(v12 + 48) )
          {
            if ( *(_BYTE *)(v12 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v12 + 492);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 496);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 466);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 468);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v12 + 470);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v12 + 472);
            }
            else if ( *(_BYTE *)(v12 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v12 + 464) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v12 + 464) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v12 + 464) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v12 + 466);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 468);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 464) >> 15;
          }
          goto LABEL_48;
        }
        goto LABEL_34;
      }
      if ( v20 == 1 )
      {
        if ( (_DWORD)v10 != v15 )
        {
LABEL_27:
          v8 = -1;
          UserSetLastError(87LL, v16, v17);
          goto LABEL_52;
        }
        if ( (a3 & 3) == 0 )
        {
          v21 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v21 = (_BYTE *)MmUserProbeAddress;
          *v21 = *v21;
          v21[43] = v21[43];
          *(_OWORD *)a3 = 0LL;
          *(_OWORD *)(a3 + 16) = 0LL;
          *(_QWORD *)(a3 + 32) = 0LL;
          *(_DWORD *)(a3 + 40) = 0;
          RIMFillDeviceHealthInfo(a3, v12);
          goto LABEL_48;
        }
LABEL_34:
        ExRaiseDatatypeMisalignment();
      }
    }
    else
    {
      if ( v15 <= 2 )
      {
        v8 = -1;
        goto LABEL_52;
      }
      memmove((void *)a3, *(const void **)(v12 + 216), *(unsigned __int16 *)(v12 + 208));
      *(_WORD *)(a3 + 2) = 92;
      *(_WORD *)(a3 + 2LL * (v15 - 1)) = 0;
    }
LABEL_48:
    v8 = v15;
    goto LABEL_52;
  }
  v8 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v15;
  UserSetLastError(122LL, v11, v13);
LABEL_52:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v24, v23, v25);
  return v8;
}
