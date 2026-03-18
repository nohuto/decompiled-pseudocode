/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180069B5C
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CB050 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x180069B08 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        CResourceTable **a3)
{
  unsigned int v3; // eax
  char v4; // r10
  unsigned int i; // ebx
  __int64 v8; // rdx
  struct CResource *v10; // r9

  v3 = *((_DWORD *)this + 7);
  v4 = 0;
  for ( i = 0; i < v3; ++i )
  {
    if ( !i || i >= v3 || (v8 = *((_QWORD *)this + 5) + i * *((_DWORD *)this + 6), !*(_DWORD *)v8) )
      v8 = 0LL;
    if ( v8 )
    {
      v10 = *(struct CResource **)(v8 + 8);
      if ( v10 )
      {
        CComposition::ReleaseResource(this, a3, i, v10, 1);
        v4 = 1;
      }
    }
    v3 = *((_DWORD *)this + 7);
  }
  return v4;
}
