/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02ED964
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentTile(
        VIDPNSOURCEINFO *this,
        struct DXGDEVICE *a2,
        D3DKMT_HANDLE a3,
        unsigned int a4,
        const struct tagRECT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v9; // rbp
  __int64 result; // rax
  unsigned int v11; // ebx
  char *pData; // rdx
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  char *v16; // rdi
  __int64 v17; // r12
  char *v18; // r11
  unsigned int v19; // eax
  struct _D3DKMT_UNLOCK v20; // [rsp+20h] [rbp-58h] BYREF
  struct _D3DKMT_LOCK v21; // [rsp+30h] [rbp-48h] BYREF

  *(_OWORD *)&v21.hDevice = 0LL;
  v21.hAllocation = a3;
  *a7 = 0;
  *a8 = 0;
  v9 = a4;
  memset(&v21.pPages, 0, 32);
  result = DXGDEVICE::Lock(a2, &v21, a6);
  v11 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v21.pData;
    v13 = (unsigned int)(a5->right - a5->left);
    v14 = 0;
    v15 = v13 * (a5->bottom - a5->top);
    v16 = (char *)v21.pData + (unsigned int)(v9 * (a5->bottom - a5->top));
    if ( v21.pData < v16 )
    {
      v17 = (unsigned int)v13;
      while ( 1 )
      {
        v18 = &pData[4 * v17];
        v13 = (unsigned __int64)pData;
        if ( pData < v18 )
        {
          do
          {
            v19 = v14 + 1;
            if ( (*(_DWORD *)v13 & 0xFFFFFF) == 0 )
              v19 = v14;
            v13 += 4LL;
            v14 = v19;
          }
          while ( v13 < (unsigned __int64)v18 );
        }
        if ( v14 > v15 >> 1 )
          break;
        pData += v9;
        if ( pData >= v16 )
          goto LABEL_12;
      }
      v14 = v15;
    }
LABEL_12:
    v20.hDevice = 0;
    *a7 = v15;
    *a8 = v14;
    v20.phAllocations = &v21.hAllocation;
    v20.NumAllocations = 1;
    DXGDEVICE::Unlock(a2, &v20, 0LL, v13);
    return v11;
  }
  return result;
}
