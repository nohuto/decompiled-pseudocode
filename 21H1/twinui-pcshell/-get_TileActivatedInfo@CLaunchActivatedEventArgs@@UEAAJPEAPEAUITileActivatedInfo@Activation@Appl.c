/*
 * XREFs of ?get_TileActivatedInfo@CLaunchActivatedEventArgs@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@Windows@@@Z @ 0x180089600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::get_TileActivatedInfo(
        CLaunchActivatedEventArgs *this,
        struct Windows::ApplicationModel::Activation::ITileActivatedInfo **a2)
{
  struct Windows::ApplicationModel::Activation::ITileActivatedInfo *v4; // rcx
  __int64 result; // rax

  v4 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Activation::ITileActivatedInfo *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo *)*((_QWORD *)this + 8);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
