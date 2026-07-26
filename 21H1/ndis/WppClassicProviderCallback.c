/*
 * XREFs of WppClassicProviderCallback @ 0x1C00AB2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00AA814 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 */

void __fastcall WppClassicProviderCallback(const struct _GUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rdx
  unsigned int v8; // r9d

  if ( (unsigned __int8)a2 <= 1u )
  {
    v4 = 0;
    v5 = a4;
    v6 = a2;
    if ( (_BYTE)a2 )
    {
      *(_DWORD *)(a4 + 44) = *(_DWORD *)(a3 + 4);
      *(_BYTE *)(a4 + 41) = *(_BYTE *)(a3 + 2);
      v7 = *(_QWORD *)a3;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)a3;
      LOBYTE(a4) = *(_BYTE *)(a3 + 2);
      imp_WppRecorderReplay(WPP_GLOBAL_Control, v7, *(unsigned int *)(a3 + 4), a4);
      v4 = *(_BYTE *)(v5 + 41);
      v8 = *(_DWORD *)(v5 + 44);
    }
    else
    {
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
      *(_QWORD *)(a4 + 24) = 0LL;
      v8 = 0;
    }
    LOBYTE(a3) = v6;
    ndisEnableWppTracingCallback(a1, a2, a3, v8, v4);
  }
}
