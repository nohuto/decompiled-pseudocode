/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1C0155E10
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0155EC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall DxgkThreadCallout(struct DXGTHREAD **a1, char a2)
{
  struct DXGTHREAD *DxgThread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID ThreadProperty; // rsi
  __int64 v10; // rax

  if ( a2 != 1 )
  {
    if ( *a1 )
    {
      ThreadProperty = PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( ThreadProperty )
      {
        PsSetThreadProperty(KeGetCurrentThread(), 1750366276LL, 0LL);
        ObfDereferenceObject(ThreadProperty);
      }
      ObfDereferenceObject(*a1);
      --dword_1C00B0A84;
      *a1 = 0LL;
    }
    return 0LL;
  }
  DxgThread = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
  if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread()) != 0LL )
  {
    ++dword_1C00B0A8C;
    ++dword_1C00B0A84;
    *a1 = DxgThread;
    return 0LL;
  }
  v10 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
  *(_QWORD *)(v10 + 24) = 377LL;
  WdLogEvent5_WdLowResource(v10);
  *a1 = 0LL;
  return 3221225495LL;
}
