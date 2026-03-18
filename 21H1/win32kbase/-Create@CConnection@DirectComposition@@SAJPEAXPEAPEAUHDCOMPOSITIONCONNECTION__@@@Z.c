/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00066FC
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C0006660 (NtDCompositionCreateConnection.c)
 * Callees:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00067DC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C000798C (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00B6498 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00BA790 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  int v7; // eax
  DirectComposition::CConnection *v8; // rsi
  int v9; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v10; // rax
  struct DirectComposition::CConnection *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = DirectComposition::CProcessData::Current();
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    if ( *((_QWORD *)v5 + 3) || !(unsigned int)UserIsCurrentProcessDwm() )
    {
      v9 = -1073741790;
    }
    else
    {
      v7 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v12);
      v8 = v12;
      v9 = v7;
      if ( v7 < 0 || (v9 = DirectComposition::CConnection::Connect(v12, a1), v9 < 0) )
      {
        if ( v8 )
          DirectComposition::CConnection::Release(v8);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v10 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v8;
        *a2 = v10;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
