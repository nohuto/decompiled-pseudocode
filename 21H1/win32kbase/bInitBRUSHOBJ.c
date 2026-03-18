/*
 * XREFs of bInitBRUSHOBJ @ 0x1C029B520
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     GreCreateBitmap @ 0x1C0090E80 (GreCreateBitmap.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00A85C4 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     GreCreatePatternBrushInternal @ 0x1C00A90C0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00A9338 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00A9370 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00AA650 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C00AA8E0 (HmgModifyHandleType.c)
 *     bInitBrush @ 0x1C029B478 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 *v0; // rbx
  __int64 *v1; // rbx
  __int64 *v2; // rbx
  __int64 *v3; // rbx
  __int64 *v4; // rbx
  DRIVER_CONTROL *v5; // rbx
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v7; // rbx
  __int64 v8; // rax
  unsigned int DeviceObject; // ecx
  unsigned __int64 *v10; // rbx
  __int64 *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C024CD58, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 0xCu, 1, 0);
  v0 = v12[0];
  if ( v12[0] )
  {
    v13 = 1;
    BRUSHMEMOBJ::vGlobal(v12);
    *((_DWORD *)v0 + 10) |= 0xC00u;
    *((_DWORD *)v0 + 44) = 5;
    *((_DWORD *)v0 + 42) = 1;
    HmgModifyHandleType(*v0 | 0x300000);
    bSetStockObject(*v0, 8, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = v0;
    BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
    v1 = v12[0];
    if ( v12[0] )
    {
      v13 = 1;
      BRUSHMEMOBJ::vGlobal(v12);
      *((_DWORD *)v1 + 10) |= 0xC00u;
      *(__int64 *)((char *)v1 + 172) = 0LL;
      *((_DWORD *)v1 + 42) = 0;
      *((_WORD *)v1 + 92) = 0;
      v1[19] = 0LL;
      HmgModifyHandleType(*v1 | 0x300000);
      bSetStockObject(*v1, 7, 0);
      WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)*v1;
      qword_1C024CD60 = (__int64)v1;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 1, 0);
      v2 = v12[0];
      if ( v12[0] )
      {
        v13 = 1;
        BRUSHMEMOBJ::vGlobal(v12);
        *((_DWORD *)v2 + 10) |= 0xC00u;
        *(__int64 *)((char *)v2 + 172) = 0LL;
        *((_DWORD *)v2 + 42) = 0;
        *((_WORD *)v2 + 92) = 0;
        v2[19] = 0LL;
        HmgModifyHandleType(*v2 | 0x300000);
        bSetStockObject(*v2, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
        v3 = v12[0];
        if ( v12[0] )
        {
          v13 = 1;
          BRUSHMEMOBJ::vGlobal(v12);
          *((_DWORD *)v3 + 10) |= 0xC00u;
          *(__int64 *)((char *)v3 + 172) = 0LL;
          *((_DWORD *)v3 + 42) = 0;
          *((_WORD *)v3 + 92) = 0;
          v3[19] = 0LL;
          HmgModifyHandleType(*v3 | 0x300000);
          bSetStockObject(*v3, 19, 0);
          WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v3;
          BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 9u, 0, 0);
          v4 = v12[0];
          if ( v12[0] )
          {
            v13 = 1;
            BRUSHMEMOBJ::vGlobal(v12);
            *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v4;
            BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 0xBu, 0, 0);
            v5 = (DRIVER_CONTROL *)v12[0];
            if ( v12[0] )
            {
              v13 = 1;
              BRUSHMEMOBJ::vGlobal(v12);
              WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = v5;
              BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C024D348);
              v7 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              WPP_MAIN_CB.Queue.Wcb.DeviceObject = (PVOID)GreCreatePatternBrushInternal(Bitmap, 0LL, 0);
              if ( !WPP_MAIN_CB.Queue.Wcb.DeviceObject )
                return 0LL;
              GreDeleteObject(v7);
              GreSetBrushOwner((HBRUSH)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
              v8 = HmgShareLockCheck((unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 16);
              if ( !v8 )
                return 0LL;
              DeviceObject = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
              *(_DWORD *)(v8 + 40) |= 0x200u;
              HmgMarkUndeletable(DeviceObject, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 0, 0);
              v10 = (unsigned __int64 *)v12[0];
              if ( v12[0] )
              {
                v13 = 1;
                BRUSHMEMOBJ::vGlobal(v12);
                bSetStockObject(*v10, 18, 0);
                *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v10;
                BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
  return 0LL;
}
