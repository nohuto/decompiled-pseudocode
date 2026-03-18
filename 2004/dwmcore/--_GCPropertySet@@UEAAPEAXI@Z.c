/*
 * XREFs of ??_GCPropertySet@@UEAAPEAXI@Z @ 0x18009B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

CPropertySet *__fastcall CPropertySet::`scalar deleting destructor'(CPropertySet *this, char a2)
{
  int v3; // edx
  unsigned int v5; // r8d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v3 = *((_DWORD *)this + 36);
  *(_QWORD *)this = &CPropertySet::`vftable';
  if ( v3 && (unsigned int)dword_180342EF0 > 5 && (qword_180342F00 & 1) != 0 && (qword_180342F08 & 1) == qword_180342F08 )
  {
    v11 = 0;
    v9 = &v7;
    v7 = v3;
    v10 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_180342EF0, (int)&dword_1802E7BCF, 0, 0, 3u, &v8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 112);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 80);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98, v5);
    else
      operator delete(this);
  }
  return this;
}
