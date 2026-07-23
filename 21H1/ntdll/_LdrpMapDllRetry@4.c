/*
 * XREFs of _LdrpMapDllRetry@4 @ 0x4B2DDF9E
 * Callers:
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F (_LdrpGetNtPathFromDosPath@8.c)
 *     _LdrpFindExistingModule@20 @ 0x4B2DE476 (_LdrpFindExistingModule@20.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall LdrpMapDllRetry(_DWORD *this)
{
  int v2; // ecx
  _UNICODE_STRING *v3; // ebx
  NTSTATUS ExistingModule; // esi
  int v6; // [esp+Ch] [ebp-114h] BYREF
  int v7; // [esp+10h] [ebp-110h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+14h] [ebp-10Ch]
  _WORD v9[130]; // [esp+18h] [ebp-108h] BYREF

  v7 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v9;
  v9[0] = 0;
  v2 = this[8];
  v3 = (_UNICODE_STRING *)(v2 + 36);
  ExistingModule = LdrpFindExistingModule(this[4], *(_DWORD *)(v2 + 144), &v6);
  if ( v6 )
  {
    LdrpLoadContextReplaceModule(this);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v3, (int)&v7);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(this, &v7);
  }
  if ( v9 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return ExistingModule;
}
