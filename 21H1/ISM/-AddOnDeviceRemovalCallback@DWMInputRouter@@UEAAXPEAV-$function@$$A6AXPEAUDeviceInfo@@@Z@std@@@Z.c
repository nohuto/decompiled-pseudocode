/*
 * XREFs of ?AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x18003B090
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@QEAAPEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@1@QEAPEAV21@AEBQEAV21@@Z @ 0x180037A18 (--$_Emplace_reallocate@AEBQEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@-$vector@PEAV-$function@.c)
 */

_QWORD *__fastcall DWMInputRouter::AddOnDeviceRemovalCallback(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *result; // rax
  _BYTE *v4; // rdx
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 640;
  result = a2;
  v4 = *(_BYTE **)(v2 + 8);
  if ( *(_BYTE **)(v2 + 16) == v4 )
    return std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Emplace_reallocate<std::function<void (DeviceInfo *)> * const &>(
             v2,
             v4,
             &v5);
  *(_QWORD *)v4 = result;
  *(_QWORD *)(v2 + 8) += 8LL;
  return result;
}
