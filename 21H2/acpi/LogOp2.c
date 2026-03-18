/*
 * XREFs of LogOp2 @ 0x1C0015E30
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     LogOp2_32 @ 0x1C00276D0 (LogOp2_32.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogOp2(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  bool v7; // bp
  int v8; // esi
  int v9; // ecx
  __int64 v11; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v16 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v16);
    if ( v16 >= 2 )
    {
      v6 = a2[10];
      if ( *(_WORD *)(v6 + 2) == 1 && *(_WORD *)(v6 + 42) == 1 )
      {
        LOBYTE(v5) = 1;
        v7 = 0;
        v8 = ValidateArgTypes(a1, v6, v5, "II");
        if ( v8 < 0 )
          return (unsigned int)v8;
        v9 = *(_DWORD *)(a2[7] + 8LL);
        if ( v9 == 147 )
        {
          v7 = *(_QWORD *)(a2[10] + 16LL) == *(_QWORD *)(a2[10] + 56LL);
        }
        else
        {
          v12 = v9 - 144;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 3;
              if ( v14 )
              {
                if ( v14 == 1 )
                  v7 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
              }
              else
              {
                v7 = *(_QWORD *)(a2[10] + 16LL) > *(_QWORD *)(a2[10] + 56LL);
              }
            }
            else
            {
              v15 = a2[10];
              if ( !*(_QWORD *)(v15 + 16) && !*(_QWORD *)(v15 + 56) )
              {
                *(_WORD *)(a2[11] + 2LL) = 1;
                goto LABEL_9;
              }
              v7 = 1;
            }
          }
          else
          {
            v11 = a2[10];
            if ( *(_QWORD *)(v11 + 16) && *(_QWORD *)(v11 + 56) )
            {
              *(_WORD *)(a2[11] + 2LL) = 1;
              goto LABEL_14;
            }
          }
        }
        *(_WORD *)(a2[11] + 2LL) = 1;
        if ( !v7 )
        {
LABEL_9:
          *(_QWORD *)(a2[11] + 16LL) = v2;
          return (unsigned int)v8;
        }
LABEL_14:
        v16 = 0;
        if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v16), v16 >= 2) )
          v2 = -1LL;
        else
          v2 = 0xFFFFFFFFLL;
        goto LABEL_9;
      }
    }
  }
  return LogOp2_32(a1, a2);
}
