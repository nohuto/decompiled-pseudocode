/*
 * XREFs of bInitBRUSHOBJ @ 0x1C0293494
 * Callers:
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C00144D0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0014748 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0015520 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x1C0015580 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015620 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C00158B0 (HmgModifyHandleType.c)
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x1C0099480 (GreCreateBitmap.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 *     bInitBrush @ 0x1C02933EC (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  HBRUSH *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  HBRUSH *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  HBRUSH *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  HBRUSH *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  HBRUSH *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  HBRUSH *v17; // rbx
  HBITMAP Bitmap; // rax
  HPALETTE v19; // rbx
  __int64 v20; // rax
  ULONG NumberOfMapRegisters; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 *v24; // rbx
  HBRUSH *v26[2]; // [rsp+30h] [rbp-20h] BYREF
  int v27; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C0246D58, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 0xCu, 1, 0);
  v2 = v26[0];
  if ( v26[0] )
  {
    v27 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v0, v1);
    *((_DWORD *)v2 + 10) |= 0xC00u;
    *((_DWORD *)v2 + 44) = 5;
    *((_DWORD *)v2 + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v2 | 0x300000);
    bSetStockObject((unsigned __int64)*v2, 8, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v2;
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 7u, 1, 0);
    v5 = v26[0];
    if ( v26[0] )
    {
      v27 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v3, v4);
      *((_DWORD *)v5 + 10) |= 0xC00u;
      *(HBRUSH *)((char *)v5 + 172) = 0LL;
      *((_DWORD *)v5 + 42) = 0;
      *((_WORD *)v5 + 92) = 0;
      v5[19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v5 | 0x300000);
      bSetStockObject((unsigned __int64)*v5, 7, 0);
      WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)*v5;
      qword_1C0246D60 = (__int64)v5;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 7u, 1, 0);
      v8 = v26[0];
      if ( v26[0] )
      {
        v27 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v6, v7);
        *((_DWORD *)v8 + 10) |= 0xC00u;
        *(HBRUSH *)((char *)v8 + 172) = 0LL;
        *((_DWORD *)v8 + 42) = 0;
        *((_WORD *)v8 + 92) = 0;
        v8[19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v8 | 0x300000);
        bSetStockObject((unsigned __int64)*v8, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 7u, 1, 0);
        v11 = v26[0];
        if ( v26[0] )
        {
          v27 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v9, v10);
          *((_DWORD *)v11 + 10) |= 0xC00u;
          *(HBRUSH *)((char *)v11 + 172) = 0LL;
          *((_DWORD *)v11 + 42) = 0;
          *((_WORD *)v11 + 92) = 0;
          v11[19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v11 | 0x300000);
          bSetStockObject((unsigned __int64)*v11, 19, 0);
          WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v11;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 9u, 0, 0);
          v14 = v26[0];
          if ( v26[0] )
          {
            v27 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v12, v13);
            WPP_MAIN_CB.Queue.Wcb.DeviceObject = v14;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 0xBu, 0, 0);
            v17 = v26[0];
            if ( v26[0] )
            {
              v27 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v15, v16);
              WPP_MAIN_CB.Queue.Wcb.DeviceContext = v17;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C0247348);
              v19 = (HPALETTE)Bitmap;
              if ( !Bitmap )
                return 0LL;
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                return 0LL;
              GreDeleteObject(v19);
              GreSetBrushOwner(*(HBRUSH *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0);
              v20 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
              if ( !v20 )
                return 0LL;
              NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
              *(_DWORD *)(v20 + 40) |= 0x200u;
              HmgMarkUndeletable(NumberOfMapRegisters, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 7u, 0, 0);
              v24 = (unsigned __int64 *)v26[0];
              if ( v26[0] )
              {
                v27 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v26, v22, v23);
                bSetStockObject(*v24, 18, 0);
                *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v24;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v26);
  return 0LL;
}
