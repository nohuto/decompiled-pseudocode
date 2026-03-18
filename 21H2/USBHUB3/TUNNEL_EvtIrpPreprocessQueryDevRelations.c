/*
 * XREFs of TUNNEL_EvtIrpPreprocessQueryDevRelations @ 0x1C0088E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 */

__int64 __fastcall TUNNEL_EvtIrpPreprocessQueryDevRelations(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int *v12; // rdi
  _DWORD *Pool2; // rbp
  unsigned int i; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0067198);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 2744),
    0LL);
  v5 = 0;
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 44) & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 2 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(
           WdfDriverGlobals,
           *(_QWORD *)(v4 + 2736));
    v8 = 0;
    if ( v7 )
    {
      do
      {
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
               WdfDriverGlobals,
               *(_QWORD *)(v4 + 2736),
               v8);
        if ( !v9 )
          break;
        ++v8;
        v10 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v9,
                            0LL)
                        + 32);
        v11 = v6 + 1;
        if ( !v10 )
          v11 = v6;
        v6 = v11;
      }
      while ( v8 < v7 );
      if ( v6 )
      {
        v12 = *(unsigned int **)(a2 + 56);
        if ( v12 )
          v6 += *v12;
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)(v6 - 1) + 16, 1748191317LL);
        if ( Pool2 )
        {
          if ( v12 && *v12 )
            memmove(Pool2, v12, 8LL * (*v12 - 1) + 16);
          for ( i = 0; i < v7; ++i )
          {
            v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v4 + 2736),
                    i);
            v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                    WdfDriverGlobals,
                    v15,
                    0LL);
            v17 = *(_QWORD *)(v16 + 32);
            if ( v17 )
            {
              *(_QWORD *)&Pool2[2 * (*Pool2)++ + 2] = v17;
              ObfReferenceObject(*(PVOID *)(v16 + 32));
            }
          }
          *(_DWORD *)(a2 + 48) = 0;
          *(_QWORD *)(a2 + 56) = Pool2;
          if ( v12 )
            goto LABEL_24;
        }
        else if ( v12 )
        {
          if ( *v12 )
          {
            do
              ObfDereferenceObject(*(PVOID *)&v12[2 * v5++ + 2]);
            while ( v5 < *v12 );
          }
LABEL_24:
          ExFreePoolWithTag(v12, 0);
        }
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 2744));
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 272))(
           WdfDriverGlobals,
           a1,
           a2);
}
