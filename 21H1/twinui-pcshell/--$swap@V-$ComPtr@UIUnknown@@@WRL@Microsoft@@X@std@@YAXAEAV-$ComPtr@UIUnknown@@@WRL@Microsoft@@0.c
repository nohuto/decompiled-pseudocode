/*
 * XREFs of ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802D8570
 * Callers:
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x1802E66E8 (-Swap@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18008459C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::swap<Microsoft::WRL::ComPtr<IUnknown>,void>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( &v5 != a1 )
  {
    v3 = *a1;
    *a1 = 0LL;
    v5 = v3;
  }
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a1, a2);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, &v5);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
