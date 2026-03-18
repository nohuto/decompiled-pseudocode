/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C02A5D74
 * Callers:
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02A5CAC (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A5D1C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 * Callees:
 *     ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C02A588C (-bCreateDIB@MULTISURF@@AEAAHXZ.c)
 */

__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  __int64 v2; // r8
  int v4; // eax
  HDEV v5; // r9
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _RECTL *v12; // r8
  struct _SURFOBJ *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v4 = *((_DWORD *)this + 18);
  v5 = *(HDEV *)(*(_QWORD *)this + 48LL);
  if ( (v4 & 2) == 0 )
  {
    if ( v5 == a2 )
    {
      if ( (v4 & 1) != 0 )
      {
        v14 = *((_QWORD *)this + 3);
        *((_DWORD *)this + 18) = v4 & 0xFFFFFFFE;
        *(_QWORD *)(v2 + 40) = v14;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 4);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 19);
      }
    }
    else if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) == 0 )
      {
        v12 = (struct _RECTL *)*((_QWORD *)this + 12);
        v13 = (struct _SURFOBJ *)*((_QWORD *)this + 11);
        v15 = *(_QWORD *)(*(_QWORD *)this + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v15, v13, v12, 0);
        v2 = *(_QWORD *)this;
        v4 = *((_DWORD *)this + 18) | 4;
      }
      *((_DWORD *)this + 18) = v4 | 1;
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( v5 == a2 )
  {
    v11 = v2 + 24;
    v10 = 8LL;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 5) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    v7 = *((_QWORD *)this + 5);
    v8 = v7 + 24;
    v9 = v7 != 0;
    v10 = 56LL;
    v11 = v8 & -(__int64)v9;
LABEL_7:
    *((_QWORD *)this + 11) = v11;
    *((_QWORD *)this + 12) = (char *)this + v10;
    return 1LL;
  }
  return result;
}
