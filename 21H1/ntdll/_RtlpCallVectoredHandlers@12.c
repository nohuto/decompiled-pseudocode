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
  volatile signed __int32 **v3; // edi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 **v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  volatile signed __int32 *v12; // edx
  volatile signed __int32 ***v13; // eax
  volatile signed __int32 **v14; // eax
  int v15; // edi
  volatile signed __int32 *v16; // [esp-4h] [ebp-48h]
  unsigned int v17; // [esp-4h] [ebp-48h]
  _DWORD v18[2]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v19; // [esp+18h] [ebp-2Ch]
  volatile signed __int32 **v20; // [esp+1Ch] [ebp-28h]
  int v21; // [esp+20h] [ebp-24h]
  int v22; // [esp+24h] [ebp-20h]
  int v23; // [esp+28h] [ebp-1Ch] BYREF
  int v24; // [esp+2Ch] [ebp-18h]
  volatile signed __int32 **v25; // [esp+30h] [ebp-14h]
  struct _PEB *v26; // [esp+34h] [ebp-10h]
  volatile signed __int32 *v27; // [esp+38h] [ebp-Ch]
  char v28; // [esp+3Fh] [ebp-5h]

  v22 = a2;
  v26 = NtCurrentPeb();
  v19 = a3 + 2;
  v21 = a1;
  v3 = (volatile signed __int32 **)(&LdrpVectorHandlerList + 3 * a3);
  v28 = 0;
  if ( ((1 << (a3 + 2)) & v26->CrossProcessFlags) != 0 )
  {
    v16 = *v3;
    v18[0] = a1;
    v5 = 0;
    v18[1] = a2;
    RtlAcquireSRWLockExclusive(v16);
    v6 = (volatile signed __int32 **)v3[1];
    do
    {
      if ( v6 == v3 + 1 )
        goto LABEL_14;
      v25 = v6;
      v20 = v6 + 2;
      if ( _InterlockedIncrement(v6[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v3);
      v7 = `RtlpGetCookieValue'::`2'::CookieValue;
      v27 = v6[4];
      if ( !`RtlpGetCookieValue'::`2'::CookieValue )
      {
        v11 = ZwQueryInformationProcess(-1, 36, &v23, 4, 0);
        if ( v11 < 0 )
          RtlRaiseStatus(v11);
        v7 = v23;
        `RtlpGetCookieValue'::`2'::CookieValue = v23;
      }
      v24 = 0;
      v8 = v7 ^ __ROR4__(v27, 32 - (v7 & 0x1F));
      v27 = (volatile signed __int32 *)v8;
      if ( (v26->NtGlobalFlag & 0x800000) != 0 )
      {
        v24 = RtlpLogExceptionHandler(v26, v8);
        v8 = (int)v27;
      }
      v9 = ((int (__thiscall *)(int, _DWORD *))v27)(v8, v18);
      v27 = (volatile signed __int32 *)v9;
      if ( v24 )
        *(_DWORD *)(v24 + 800) = v9 != -1;
      RtlAcquireSRWLockExclusive(*v3);
      v6 = (volatile signed __int32 **)*v6;
      v10 = _InterlockedDecrement(*v20);
      if ( v10 <= 0 )
      {
        if ( v10 )
          __fastfail(0xEu);
        if ( !v25[3] )
        {
          v17 = 60;
LABEL_30:
          __fastfail(v17);
        }
        LdrProtectMrdataHeap(0);
        LdrProtectMrdata(0);
        v12 = *v25;
        if ( *((volatile signed __int32 ***)*v25 + 1) != v25 || (v13 = (volatile signed __int32 ***)v25[1], *v13 != v25) )
        {
          v17 = 3;
          goto LABEL_30;
        }
        *v13 = (volatile signed __int32 **)v12;
        *((_DWORD *)v12 + 1) = v13;
        if ( v13 == (volatile signed __int32 ***)v12 )
          _interlockedbittestandreset((volatile signed __int32 *)&v26->40, v19);
        LdrProtectMrdata(1);
        v14 = v25;
        *v25 = v5;
        v5 = (volatile signed __int32 *)v14;
        LdrProtectMrdataHeap((void *)1);
      }
    }
    while ( v27 != (volatile signed __int32 *)-1 );
    v28 = 1;
LABEL_14:
    RtlReleaseSRWLockExclusive(*v3);
    if ( v5 )
    {
      LdrProtectMrdataHeap(0);
      do
      {
        v15 = (int)v5;
        v5 = (volatile signed __int32 *)*v5;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v15 + 8));
        if ( LdrControlFlowGuardEnforced() )
          RtlFreeHeap(LdrpMrdataHeap, 0, v15);
        else
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v15);
      }
      while ( v5 );
      LdrProtectMrdataHeap((void *)1);
    }
  }
  return v28;
}
