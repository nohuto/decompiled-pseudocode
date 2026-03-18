/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180039BC0
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800373F0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18003742C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800A20EC (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E1F44 (--_V@YAXPEAX_K@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this)
{
  void **v1; // rbx
  void **v3; // rbx
  CRegion *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rbx
  char *v8; // rbx

  v1 = (void **)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable';
  if ( v1 )
  {
    operator delete(*v1);
    operator delete(v1);
  }
  v3 = (void **)*((_QWORD *)this + 3);
  if ( v3 )
  {
    operator delete(*v3);
    operator delete(v3);
  }
  v4 = (CRegion *)*((_QWORD *)this + 15);
  if ( v4 )
    CRegion::`scalar deleting destructor'(v4, 1u);
  v5 = (char *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    v8 = v5 - 8;
    `vector destructor iterator'(
      v5,
      48LL,
      *((_QWORD *)v5 - 1),
      (void (__fastcall *)(char *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v8, 48LL * *(_QWORD *)v8 + 8);
  }
  v6 = (char *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(
      v6,
      48LL,
      *((_QWORD *)v6 - 1),
      (void (__fastcall *)(char *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v7, 48LL * *(_QWORD *)v7 + 8);
  }
}
