/*
 * XREFs of ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180235500
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1802247C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802237F0 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180235664 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$_ea_180235664.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Update(struct CManipulationFrame *this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = (_DWORD *)((char *)this + 172);
    do
    {
      if ( (*v3 & 0x10004) != 4 )
        break;
      ++v2;
      v3 += 62;
    }
    while ( v2 < *((_DWORD *)this + 4) );
  }
  if ( CManipulationFrame::IsMousewheelFrame(this) )
    CPointerDeviceCache::s_rcMouseRegion = *(struct tagRECT *)((char *)this + 376);
  if ( (_BYTE)v6 )
  {
    v9 = *((_QWORD *)this + 22);
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
      v5,
      &v9);
  }
  return CPointerDeviceCache::Query(*((_QWORD *)this + 22), v4, v6, v7);
}
