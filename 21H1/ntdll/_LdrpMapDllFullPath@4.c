/*
 * XREFs of _LdrpMapDllFullPath@4 @ 0x4B2DE04A
 * Callers:
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpAppCompatRedirect@20 @ 0x4B2DE3B6 (_LdrpAppCompatRedirect@20.c)
 *     _LdrpFindExistingModule@20 @ 0x4B2DE476 (_LdrpFindExistingModule@20.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall LdrpMapDllFullPath(int *this)
{
  _UNICODE_STRING *v2; // ebx
  int v3; // esi
  int v4; // eax
  int v6; // [esp+10h] [ebp-118h]
  int v7; // [esp+14h] [ebp-114h] BYREF
  int v8; // [esp+18h] [ebp-110h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+1Ch] [ebp-10Ch]
  _WORD v10[130]; // [esp+20h] [ebp-108h] BYREF

  v7 = 0;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v10;
  v8 = 0x1000000;
  v10[0] = 0;
  v6 = this[8];
  v2 = (_UNICODE_STRING *)(v6 + 44);
  v3 = LdrpResolveDllName(this, &v8, (PUNICODE_STRING)(v6 + 44), (_DWORD *)(v6 + 36), this[4]);
  if ( this[24] )
    goto LABEL_13;
  v3 = LdrpAppCompatRedirect(v2, (int)&v8, v3);
  if ( v3 < 0 )
    goto LABEL_7;
  v4 = LdrpHashUnicodeString(v2);
  *(_DWORD *)(v6 + 144) = v4;
  LdrpFindExistingModule(this[4], v4, &v7);
  if ( v7 )
  {
    LdrpLoadContextReplaceModule(this);
  }
  else
  {
LABEL_13:
    if ( v3 >= 0 )
    {
      v3 = LdrpMapDllNtFileName(this, &v8);
      if ( v3 == 1073741838 )
        v3 = -1073741701;
    }
  }
LABEL_7:
  if ( v10 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return v3;
}
