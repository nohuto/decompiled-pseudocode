/*
 * XREFs of ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02B9CB8
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02B9E00 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102A50 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0150A60 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
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
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 result; // rax
  unsigned int v12; // ebx
  char *pData; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // rbp
  unsigned __int64 v18; // r10
  char *v19; // r11
  bool v20; // zf
  unsigned int v21; // eax
  struct _D3DKMT_UNLOCK v22; // [rsp+20h] [rbp-68h] BYREF
  struct _D3DKMT_LOCK v23; // [rsp+30h] [rbp-58h] BYREF

  *(_OWORD *)&v23.hDevice = 0LL;
  v23.hAllocation = a3;
  v9 = 0LL;
  *a7 = 0;
  *a8 = 0;
  v10 = a4;
  memset(&v23.pPages, 0, 32);
  result = DXGDEVICE::Lock(a2, &v23, a6);
  v12 = result;
  if ( (int)result >= 0 )
  {
    pData = (char *)v23.pData;
    v14 = a5->right - a5->left;
    v15 = 0;
    v16 = v14 * (a5->bottom - a5->top);
    v17 = (char *)v23.pData + (unsigned int)(v10 * (a5->bottom - a5->top));
    if ( v23.pData < v17 )
    {
      while ( 1 )
      {
        v18 = v14;
        v19 = pData;
        if ( pData > &pData[4 * v14] )
          v18 = 0LL;
        if ( v18 )
        {
          do
          {
            v20 = (*(_DWORD *)v19 & 0xFFFFFF) == 0;
            v21 = v15 + 1;
            v19 += 4;
            if ( v20 )
              v21 = v15;
            ++v9;
            v15 = v21;
          }
          while ( v9 < v18 );
        }
        if ( v15 > v16 >> 1 )
          break;
        pData += v10;
        v9 = 0LL;
        if ( pData >= v17 )
          goto LABEL_13;
      }
      v15 = v14 * (a5->bottom - a5->top);
    }
LABEL_13:
    *a7 = v16;
    *a8 = v15;
    v22.phAllocations = &v23.hAllocation;
    v22.hDevice = 0;
    v22.NumAllocations = 1;
    DXGDEVICE::Unlock(a2, &v22, 0LL);
    return v12;
  }
  return result;
}
