/*
 * XREFs of NtGdiResizePalette @ 0x1C02B6CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0069D68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00A53E0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00FA978 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00FAA80 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD17C (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02AD1A4 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02BBA60 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  HDC v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  signed __int32 v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  HDC v17; // rbx
  __int64 v19; // [rsp+50h] [rbp+7h] BYREF
  int v20; // [rsp+58h] [rbp+Fh]
  _QWORD v21[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp+27h] BYREF
  __int64 *v23[2]; // [rsp+80h] [rbp+37h] BYREF
  struct PALETTE *v24; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 - 1 <= 0x3FF )
  {
    v3 = 0;
    v4 = 0;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v24, a1);
    if ( v24 )
    {
      if ( v24 != ppalDefault )
      {
        v5 = *((_DWORD *)v24 + 6);
        if ( (v5 & 0x100) != 0 )
        {
          if ( (v5 & 0x800) != 0 && a2 != 256 )
            goto LABEL_30;
          v20 = 0;
          v19 = 0LL;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v19, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
          {
            v25 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v6 = *((unsigned int *)v24 + 7);
            v7 = *(_DWORD *)(v19 + 28);
            if ( (unsigned int)v6 >= v7 )
              v6 = v7;
            memmove(*(void **)(v19 + 112), *((const void **)v24 + 14), 4 * v6);
            *(_DWORD *)(v19 + 24) = *((_DWORD *)v24 + 6);
            *(_QWORD *)(v19 + 40) = *((_QWORD *)v24 + 5);
            *(_QWORD *)(v19 + 48) = *((_QWORD *)v24 + 6);
            *(_DWORD *)(v19 + 56) = *((_DWORD *)v24 + 14);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v19);
            GreAcquireHmgrSemaphore();
            v8 = *(HDC *)(v19 + 40);
            while ( v8 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v21, v8);
              if ( !v21[0] )
                goto LABEL_16;
              v9 = *(unsigned __int16 *)(v21[0] + 12LL);
              if ( (unsigned __int16)v9 > 1u )
              {
                TraceLoggingWriteUnsupportedGdiUsage(5, *((unsigned int *)v24 + 6), v9);
LABEL_16:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v21);
                goto LABEL_23;
              }
              v8 = *(HDC *)(v21[0] + 984LL);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v21);
              v21[0] = 0LL;
              MDCOBJ::~MDCOBJ((MDCOBJ *)v21);
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v24);
            v14 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v24 + 8) = v14;
            v15 = *((_QWORD *)v24 + 15);
            if ( (struct PALETTE *)v15 != v24 )
              *(_DWORD *)(v15 + 32) = v14;
            v4 = XEPALOBJ::bSwap((XEPALOBJ *)&v19, &v24, v12, v13);
            if ( v4 )
            {
              v16 = v19;
              v8 = *(HDC *)(v19 + 40);
              if ( !v8 )
                goto LABEL_24;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v23, v8);
                v11 = v23[0];
                if ( !v23[0] )
                  break;
                v23[0][11] = (__int64)v24;
                *((_DWORD *)v11 + 79) |= 0xFu;
                v8 = (HDC)v11[123];
                XDCOBJ::vAltUnlockFast(v23);
              }
              while ( v8 );
            }
LABEL_23:
            v16 = v19;
LABEL_24:
            v17 = *(HDC *)(v16 + 40);
            while ( v17 != v8 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v22, v17);
              _InterlockedDecrement((volatile signed __int32 *)(v22[0] + 12LL));
              v17 = *(HDC *)(v22[0] + 984LL);
              MDCOBJ::~MDCOBJ((MDCOBJ *)v22);
            }
            GreReleaseHmgrSemaphore(v11, v10);
            SEMOBJ::vUnlock((SEMOBJ *)&v25);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
        }
      }
    }
    v3 = v4;
LABEL_30:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
    return v3;
  }
  return 0LL;
}
