/*
 * XREFs of ??_ECParticleVector2Behavior@@UEAAPEAXI@Z @ 0x18019F360
 * Callers:
 *     ??_ECParticleVector2Behavior@@WHA@EAAPEAXI@Z @ 0x180105510 (--_ECParticleVector2Behavior@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CParticleVector2Behavior *__fastcall CParticleVector2Behavior::`vector deleting destructor'(
        CParticleVector2Behavior *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 4 * ((__int64)(*((_QWORD *)this + 17) - (_QWORD)v4) >> 2));
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 8 * ((__int64)(*((_QWORD *)this + 13) - (_QWORD)v5) >> 3));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
