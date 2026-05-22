/*
 * XREFs of ??4?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049D64
 * Callers:
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x180178CF8 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180049924 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::operator=(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
  {
    std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
