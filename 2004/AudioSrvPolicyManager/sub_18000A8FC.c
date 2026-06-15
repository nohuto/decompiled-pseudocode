/*
 * XREFs of sub_18000A8FC @ 0x18000A8FC
 * Callers:
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A8FC(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  _DWORD *v5; // rdx
  _DWORD *v6; // rax
  HANDLE v7; // rax
  volatile signed __int32 *v8; // r14
  int v9; // ecx
  int v10; // ecx
  int v11; // xmm6_4
  HANDLE v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rcx
  volatile signed __int32 *v15; // rbx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = off_18003ED00;
    v3[2] = 0;
    *((_BYTE *)v3 + 12) = 0;
    *((_QWORD *)v3 + 2) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = GetProcessHeap();
    v6 = HeapAlloc(v7, 0, 0x18uLL);
    if ( v6 )
    {
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = off_18003EB18;
      *((_QWORD *)v6 + 2) = v4;
    }
    v5 = v4;
  }
  *(_QWORD *)(a1 + 456) = v5;
  v8 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v6;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(_DWORD *)(a1 + 448);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v11 = -1061158912;
      else
        v11 = 0;
    }
    else
    {
      v11 = -1047527424;
    }
  }
  else
  {
    v11 = -1027604480;
  }
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 0, 0x28uLL);
  v14 = v13;
  if ( v13 )
  {
    v13[2] = 1;
    v13[3] = 1;
    *(_QWORD *)v13 = off_18003ECA0;
    *((_QWORD *)v13 + 2) = off_18003ED00;
    v13[6] = v11;
    *((_BYTE *)v13 + 28) = 0;
    *((_QWORD *)v13 + 4) = 10000000LL;
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)(a1 + 472) = v14 + 4;
  v15 = *(volatile signed __int32 **)(a1 + 480);
  *(_QWORD *)(a1 + 480) = v14;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return 0LL;
}
