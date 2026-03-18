/*
 * XREFs of ??1CFlipManagerSignal@@UEAA@XZ @ 0x1C007BE20
 * Callers:
 *     ??_ECFlipManagerSignal@@UEAAPEAXI@Z @ 0x1C007BE90 (--_ECFlipManagerSignal@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipManagerSignal::~CFlipManagerSignal(CFlipManagerSignal *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CFlipManagerSignal **v4; // rdx
  CFlipManagerSignal **v5; // rcx

  *(_QWORD *)this = &CFlipManagerSignal::`vftable';
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (CFlipManagerSignal **)*((_QWORD *)this + 1);
  if ( v4[1] != (CFlipManagerSignal *)((char *)this + 8)
    || (v5 = (CFlipManagerSignal **)*((_QWORD *)this + 2), *v5 != (CFlipManagerSignal *)((char *)this + 8)) )
  {
    __fastfail(3u);
  }
  *v5 = (CFlipManagerSignal *)v4;
  v4[1] = (CFlipManagerSignal *)v5;
}
