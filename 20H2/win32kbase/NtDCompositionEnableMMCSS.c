/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C01CCAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0065044 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01CD6F0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v8; // rbp
  struct _ERESOURCE *v9; // rbx
  int v10; // eax
  bool v11; // cl
  int v12; // eax
  unsigned int v13; // edx

  v4 = a1;
  v5 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    v8 = DirectComposition::CProcessData::Current(v6);
    v9 = (struct _ERESOURCE *)*((_QWORD *)v8 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    v10 = *((_DWORD *)v8 + 10);
    if ( v4 )
    {
      if ( v10 != -1 )
      {
        v11 = v10 == 0;
        v12 = v10 + 1;
        goto LABEL_8;
      }
    }
    else if ( v10 )
    {
      v12 = v10 - 1;
      v11 = v12 == 0;
LABEL_8:
      *((_DWORD *)v8 + 10) = v12;
      if ( v11 )
        v5 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, v4);
      goto LABEL_11;
    }
    v5 = -1073741823;
LABEL_11:
    ExReleaseResourceLite(*((PERESOURCE *)v8 + 1));
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release(DefaultConnection, v13);
    return v5;
  }
  return (unsigned int)-1073741790;
}
