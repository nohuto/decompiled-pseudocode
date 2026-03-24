/*
 * XREFs of ?UpdateInterpolationMode@CWARPDrawListEntry@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E2770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWARPDrawListEntry::UpdateInterpolationMode(CWARPDrawListEntry *this, enum D2D1_INTERPOLATION_MODE a2)
{
  *((_DWORD *)this + 84) = a2;
  *((_DWORD *)this + 110) = a2;
}
