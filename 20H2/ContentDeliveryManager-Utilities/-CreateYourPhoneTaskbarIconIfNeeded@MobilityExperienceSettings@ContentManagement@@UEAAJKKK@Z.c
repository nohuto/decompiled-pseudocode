/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x1800121F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000E160 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::CreateYourPhoneTaskbarIconIfNeeded(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded((Mobility::Pinning *)a2, a3, a4);
  return 0LL;
}
