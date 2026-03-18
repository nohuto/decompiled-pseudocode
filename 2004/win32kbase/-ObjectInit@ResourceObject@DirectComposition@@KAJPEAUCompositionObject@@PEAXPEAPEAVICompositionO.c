/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C009E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C009D910 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax
  int v4; // esi
  __int64 v6; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // edi

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  v4 = (int)a2;
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *((_DWORD *)a1 + 15) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
  }
  *a3 = v3;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)a1 + 9) = v4;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v6);
  *((_QWORD *)a1 + 5) = DefaultConnection;
  if ( DefaultConnection )
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)a1 + 9),
                       (struct CompositionObject *)((char *)a1 + 48));
  else
    SystemResource = -1073741790;
  if ( SystemResource >= 0 )
    *((_BYTE *)a1 + 32) = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
