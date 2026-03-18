/*
 * XREFs of ?AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z @ 0x1C0040D3C
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C0040DE4 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0074138 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1C009B470 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 */

char __fastcall GdiHandleEntryDirectory::AcquireEntryIndex(GdiHandleEntryDirectory *this, unsigned int *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rbp
  unsigned int v8; // eax
  unsigned int v9; // edi
  GdiHandleEntryTable *v10; // rbp
  GdiHandleEntryTable *v11; // rcx
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)this )
  {
    v4 = *((_QWORD *)this + 1);
    v13 = 0;
    v5 = *(_DWORD *)(v4 + 16);
    if ( v5 < *(_DWORD *)(v4 + 8) )
    {
      v6 = *(unsigned int *)(v4 + 12);
      if ( (_DWORD)v6 != -1 )
      {
        *(_DWORD *)(v4 + 12) = *(_DWORD *)(*(_QWORD *)v4 + 24 * v6);
LABEL_5:
        *a2 = v6;
        *(_DWORD *)(v4 + 16) = v5 + 1;
        return 1;
      }
      LODWORD(v6) = *(_DWORD *)(v4 + 20);
      if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
             *(GdiHandleEntryTable::EntryDataLookupTable **)(v4 + 24),
             v6) )
      {
        _InterlockedOr(v12, 0);
        ++*(_DWORD *)(v4 + 20);
        v5 = *(_DWORD *)(v4 + 16);
        goto LABEL_5;
      }
      v4 = *((_QWORD *)this + 1);
    }
    if ( *(_DWORD *)(v4 + 16) == *(_DWORD *)(v4 + 8) )
    {
      LOWORD(v8) = *((_WORD *)this + 1);
      v9 = 1;
      if ( (unsigned __int16)v8 > 1u )
      {
        do
        {
          v10 = (GdiHandleEntryTable *)*((_QWORD *)this + v9 + 1);
          if ( GdiHandleEntryTable::AcquireEntryIndex(v10, &v13) )
            goto LABEL_20;
          if ( *((_DWORD *)v10 + 4) != *((_DWORD *)v10 + 2) )
            return 0;
          v8 = *((unsigned __int16 *)this + 1);
        }
        while ( ++v9 < v8 );
      }
      if ( (_WORD)v8 == 256 )
      {
        *(_BYTE *)this = 1;
      }
      else
      {
        *((_QWORD *)this + *((unsigned __int16 *)this + 1) + 1) = GdiHandleEntryTable::_Create(0x10000u, 1);
        v11 = (GdiHandleEntryTable *)*((_QWORD *)this + *((unsigned __int16 *)this + 1) + 1);
        if ( v11 )
        {
          GdiHandleEntryTable::AcquireEntryIndex(v11, &v13);
          v9 = *((unsigned __int16 *)this + 1);
          *((_WORD *)this + 1) = v9 + 1;
LABEL_20:
          *a2 = v13 + *((_DWORD *)this + 514) + ((v9 + 0xFFFF) << 16);
          return 1;
        }
      }
    }
  }
  return 0;
}
