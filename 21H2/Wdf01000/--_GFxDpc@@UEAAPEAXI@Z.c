/*
 * XREFs of ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C005B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C005B860 (--1FxDpc@@UEAA@XZ.c)
 */

FxDpc *__fastcall FxDpc::`scalar deleting destructor'(FxDpc *this, unsigned int a2)
{
  char v2; // bl
  FxDpc *v4; // rcx

  v2 = a2;
  FxDpc::~FxDpc(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxDpc *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
