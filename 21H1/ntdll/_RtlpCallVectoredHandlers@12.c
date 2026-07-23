/*
 * XREFs of _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlpLogExceptionHandler@16 @ 0x4B368AB5 (_RtlpLogExceptionHandler@16.c)
 */

char __fastcall RtlpCallVectoredHandlers(int a1, int a2, int a3)
{
  _RTL_SRWLOCK **v3; // edi
  PVOID *v5; // esi
  _RTL_SRWLOCK **v6; // ebx
  PULONG v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  PVOID *v12; // edx
  PVOID ***v13; // eax
  PVOID *v14; // eax
  PVOID *v15; // edi
  int v16; // eax
  _RTL_SRWLOCK *v17; // [esp-4h] [ebp-48h]
  unsigned int v18; // [esp-4h] [ebp-48h]
  _DWORD v19[2]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v20; // [esp+18h] [ebp-2Ch]
  volatile signed __int32 **v21; // [esp+1Ch] [ebp-28h]
  int v22; // [esp+20h] [ebp-24h]
  int v23; // [esp+24h] [ebp-20h]
  ULONG *ProcessInformation; // [esp+28h] [ebp-1Ch] BYREF
  int v25; // [esp+2Ch] [ebp-18h]
  PVOID **v26; // [esp+30h] [ebp-14h]
  struct _PEB *v27; // [esp+34h] [ebp-10h]
  _RTL_SRWLOCK *v28; // [esp+38h] [ebp-Ch]
  char v29; // [esp+3Fh] [ebp-5h]

  v23 = a2;
  v27 = NtCurrentPeb();
  v20 = a3 + 2;
  v22 = a1;
  v3 = (_RTL_SRWLOCK **)(&LdrpVectorHandlerList + 3 * a3);
  v29 = 0;
  if ( ((1 << (a3 + 2)) & v27->CrossProcessFlags) != 0 )
  {
    v17 = *v3;
    v19[0] = a1;
    v5 = 0;
    v19[1] = a2;
    RtlAcquireSRWLockExclusive(v17);
    v6 = (_RTL_SRWLOCK **)v3[1];
    do
    {
      if ( v6 == v3 + 1 )
        goto LABEL_14;
      v26 = (PVOID **)v6;
      v21 = (volatile signed __int32 **)(v6 + 2);
      if ( _InterlockedIncrement((volatile signed __int32 *)v6[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v3);
      v7 = `RtlpGetCookieValue'::`2'::CookieValue;
      v28 = v6[4];
      if ( !`RtlpGetCookieValue'::`2'::CookieValue )
      {
        v11 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
        if ( v11 < 0 )
          RtlRaiseStatus(v11);
        v7 = ProcessInformation;
        `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
      }
      v25 = 0;
      v8 = (unsigned int)v7 ^ __ROR4__(v28, 32 - ((unsigned __int8)v7 & 0x1F));
      v28 = (_RTL_SRWLOCK *)v8;
      if ( (v27->NtGlobalFlag & 0x800000) != 0 )
      {
        v25 = RtlpLogExceptionHandler(v27, v8);
        v8 = (int)v28;
      }
      v9 = ((int (__thiscall *)(int, _DWORD *))v28)(v8, v19);
      v28 = (_RTL_SRWLOCK *)v9;
      if ( v25 )
        *(_DWORD *)(v25 + 800) = v9 != -1;
      RtlAcquireSRWLockExclusive(*v3);
      v6 = (_RTL_SRWLOCK **)*v6;
      v10 = _InterlockedDecrement(*v21);
      if ( v10 <= 0 )
      {
        if ( v10 )
          __fastfail(0xEu);
        if ( !v26[3] )
        {
          v18 = 60;
LABEL_30:
          __fastfail(v18);
        }
        LdrProtectMrdataHeap(0);
        LdrProtectMrdata(0);
        v12 = *v26;
        if ( (*v26)[1] != v26 || (v13 = (PVOID ***)v26[1], *v13 != v26) )
        {
          v18 = 3;
          goto LABEL_30;
        }
        *v13 = (PVOID **)v12;
        v12[1] = v13;
        if ( v13 == (PVOID ***)v12 )
          _interlockedbittestandreset((volatile signed __int32 *)&v27->40, v20);
        LdrProtectMrdata(1);
        v14 = (PVOID *)v26;
        *v26 = v5;
        v5 = v14;
        LdrProtectMrdataHeap((void *)1);
      }
    }
    while ( v28 != (_RTL_SRWLOCK *)-1 );
    v29 = 1;
LABEL_14:
    RtlReleaseSRWLockExclusive(*v3);
    if ( v5 )
    {
      LdrProtectMrdataHeap(0);
      do
      {
        v15 = v5;
        v5 = (PVOID *)*v5;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15[2]);
        LOBYTE(v16) = LdrControlFlowGuardEnforced();
        if ( v16 )
          RtlFreeHeap(LdrpMrdataHeap, 0, v15);
        else
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      }
      while ( v5 );
      LdrProtectMrdataHeap((void *)1);
    }
  }
  return v29;
}
