/*
 * XREFs of ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x1802661AC
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x180264B5C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CChainingHelper *__fastcall CChainingHelper::CChainingHelper(CChainingHelper *this, struct CInteraction *a2)
{
  `vector constructor iterator'(
    (char *)this,
    12LL,
    3LL,
    (void (__fastcall *)(char *))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 36) &= 0xFCu;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
