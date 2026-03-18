/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C002D488
 * Callers:
 *     GreDwmGetSurfaceData @ 0x1C002D294 (GreDwmGetSurfaceData.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::GetSoSurfaceData(SFMLOGICALSURFACE *this, struct tagDWMSURFACEDATA *a2)
{
  _DWORD *v2; // r9
  struct _ACCESS_STATE *ObjectType; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // r9
  __int64 v7; // rax
  void *v9; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 23);
  LODWORD(ObjectType) = 0;
  if ( !v2 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
    *((_DWORD *)a2 + 3) = 6;
LABEL_12:
    v7 = qword_1C033C910;
    goto LABEL_7;
  }
  *((_DWORD *)a2 + 1) = v2[8];
  *((_DWORD *)a2 + 2) = v2[9];
  *((_DWORD *)a2 + 3) = v2[18];
  *((_DWORD *)a2 + 4) = v2[16];
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = 0LL;
  *((_QWORD *)a2 + 3) = v5;
  if ( v2[18] != 6 )
  {
    *(_DWORD *)a2 = 0;
    goto LABEL_12;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(this) )
  {
    *(_DWORD *)a2 = 2;
    *((_QWORD *)a2 + 5) = v6[68];
    v7 = v6[69];
LABEL_7:
    *((_QWORD *)a2 + 4) = v7;
    return (unsigned int)ObjectType;
  }
  v9 = (void *)v6[28];
  *((_QWORD *)a2 + 4) = qword_1C033C910;
  if ( v9 )
  {
    *(_DWORD *)a2 = 1;
    LODWORD(ObjectType) = ObOpenObjectByPointer(
                            v9,
                            0,
                            ObjectType,
                            6u,
                            (POBJECT_TYPE)ObjectType,
                            (KPROCESSOR_MODE)ObjectType,
                            (PHANDLE)a2 + 5);
  }
  else
  {
    *(_DWORD *)a2 = (_DWORD)ObjectType;
  }
  return (unsigned int)ObjectType;
}
