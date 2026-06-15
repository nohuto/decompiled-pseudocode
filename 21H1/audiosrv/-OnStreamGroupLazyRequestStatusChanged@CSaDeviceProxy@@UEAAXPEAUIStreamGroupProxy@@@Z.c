/*
 * XREFs of ?OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800E68E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupLazyRequestStatusChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  *((_DWORD *)this + 23) += (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2) != 0
                          ? 1
                          : -1;
  *((_QWORD *)this + 12) = GetTickCount64();
}
