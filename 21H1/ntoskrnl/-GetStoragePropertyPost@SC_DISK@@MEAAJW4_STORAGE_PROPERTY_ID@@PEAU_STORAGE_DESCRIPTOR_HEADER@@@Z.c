/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1405C10B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(SC_DISK *this, int a2, struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  unsigned int v3; // r9d
  DWORD v4; // ecx
  DWORD Size; // eax
  DWORD Version; // edx

  v3 = 0;
  if ( a2 > 14 )
  {
    if ( a2 == 58 )
    {
      Version = a3[4].Version;
      if ( Version < a3->Version || Version > a3->Size - 1 )
        a3[4].Version = 0;
    }
  }
  else if ( a2 == 6 )
  {
    v4 = *((_DWORD *)this + 57);
    if ( a3[2].Version != v4 )
      return (unsigned int)-1073739509;
    Size = a3[2].Size;
    if ( Size < v4 || Size % v4 )
      return (unsigned int)-1073739509;
  }
  return v3;
}
