/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000EEFC
 * Callers:
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18000FAAC (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180010784 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000E098 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18000E9B8 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000EC2C (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F958 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F9E4 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CVisual **this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 **ReceiverEntry; // rax

  if ( a2 != this[7] )
  {
    if ( this[7] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      v4 = (CProjectedShadowScene **)this[8];
      v5 = 0LL;
      v6 = (unsigned __int64)(this[9] - (CVisual *)v4 + 7) >> 3;
      if ( v4 > (CProjectedShadowScene **)this[9] )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*v4, (const struct CProjectedShadowReceiver *)this);
          ReceiverEntry[3] = 0LL;
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
          ++v5;
          ++v4;
        }
        while ( v5 != v6 );
      }
      CVisual::RemoveProjectedShadowReceiver(this[7], (struct CProjectedShadowReceiver *)this);
    }
    this[7] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver(a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
    }
  }
}
