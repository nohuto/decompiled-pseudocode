/*
 * XREFs of ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1803DB75C
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803DC190 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803DD2D0 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall UwpPrimaryAppProxy::FindAppView(__int64 a1, struct IUnknown ***a2, struct IUnknown *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown **v5; // rbx
  struct IUnknown ***result; // rax
  struct IUnknown *v7; // [rsp+40h] [rbp+18h]

  v7 = a3;
  v3 = *(struct IUnknown ***)(a1 + 56);
  v5 = *(struct IUnknown ***)(a1 + 48);
  if ( v5 != v3 )
  {
    while ( !(unsigned int)SHIsSameObject(a3, *v5) )
    {
      if ( ++v5 == v3 )
        break;
      a3 = v7;
    }
  }
  result = a2;
  *a2 = v5;
  return result;
}
