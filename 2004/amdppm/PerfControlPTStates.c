/*
 * XREFs of PerfControlPTStates @ 0x1C0001A10
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C0001B70 (InvokePTStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, unsigned __int64 *a2, char a3, char a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx

  if ( !a4 )
  {
    v6 = *a2;
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(v7 + 56);
    v9 = v8 + 32LL * (unsigned int)v6;
    v10 = *(unsigned __int8 *)(v9 + 25);
    if ( *(_DWORD *)(a1 + 8) == v10 )
      goto LABEL_3;
    if ( v10 == 1 )
    {
      if ( !*(_DWORD *)(v7 + 72) )
        goto LABEL_3;
      v13 = *(_DWORD *)(v7 + 68);
    }
    else
    {
      v12 = *(_DWORD *)(v7 + 68);
      if ( !v12 )
        goto LABEL_3;
      v13 = v12 - 1;
    }
    v14 = v8 + 32LL * v13;
    if ( v14 )
    {
      if ( !a3 )
      {
LABEL_7:
        *(_DWORD *)(a1 + 16) = v6;
        *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
        *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
        return;
      }
      InvokePTStateChange(v7, v14, HIDWORD(v6));
    }
LABEL_3:
    if ( a3 )
    {
      if ( *(_BYTE *)(v9 + 25) == 1 )
      {
        v11 = *(_QWORD *)(v7 + 40);
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 48);
        v7 += 8LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v7)(v11, *(_QWORD *)v9, *(_QWORD *)(v9 + 8), HIDWORD(v6));
    }
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 8) = 0;
}
