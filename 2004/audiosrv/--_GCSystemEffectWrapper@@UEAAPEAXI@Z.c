/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x1801301A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$_Ref_count_obj@VCVolumeUnit@@@std@@EEAAXXZ @ 0x18000BCC0 (-_Destroy@-$_Ref_count_obj@VCVolumeUnit@@@std@@EEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x1801300D8 (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x180132CC8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x180132EF8 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  int v4; // edx
  int v5; // ecx
  void *v6; // rdi
  int v7; // r8d

  CSystemEffectWrapper::~CSystemEffectWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      std::_Ref_count_obj<CVolumeUnit>::_Destroy();
    }
    else
    {
      v6 = AERTGetDLLRTHeap();
      if ( g_bSkipRTHeap )
      {
        operator delete(this);
      }
      else
      {
        if ( v6 && this )
          RtlFreeMemoryBlockLookaside(v6, this);
        if ( (byte_1801A0981 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v5, v4, v7, 6, (char)v6, 0, 0, 0);
      }
    }
  }
  return this;
}
