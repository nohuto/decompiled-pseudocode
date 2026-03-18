/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18006E07C
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x18006E040 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180038124 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009F650 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E36F4 (--_V@YAXPEAX_K@Z.c)
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
    CRegion::`scalar deleting destructor'(v4, 1);
  v5 = (char *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    v8 = v5 - 8;
    `vector destructor iterator'(v5, 0x30uLL, *((_QWORD *)v5 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v8, 48LL * *(_QWORD *)v8 + 8);
  }
  v6 = (char *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(v6, 0x30uLL, *((_QWORD *)v6 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v7, 48LL * *(_QWORD *)v7 + 8);
  }
}
