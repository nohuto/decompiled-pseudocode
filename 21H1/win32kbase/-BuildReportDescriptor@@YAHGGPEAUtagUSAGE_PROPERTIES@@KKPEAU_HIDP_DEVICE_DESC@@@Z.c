/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0173170
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C017399C (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0173AE4 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C0172DC4 (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C0172E38 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HIDP_DEVICE_DESC *a6)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v9; // ebx
  char v10; // si
  struct tagUSAGE_PROPERTIES *v11; // r15
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // r14d
  unsigned __int8 *v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  struct tagUSAGE_PROPERTIES *v20; // r14
  __int128 v21; // xmm1
  unsigned int v22; // eax
  int v23; // r12d
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  char v28; // si
  __int128 v29; // xmm1
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int CollectionDescription; // eax
  __int64 v36; // [rsp+30h] [rbp-51h]
  unsigned int v37; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-35h] BYREF
  int v39; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-2Dh]
  _OWORD v41[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v42; // [rsp+78h] [rbp-9h] BYREF
  __int128 v43; // [rsp+88h] [rbp+7h]
  char v44; // [rsp+E0h] [rbp+5Fh]
  unsigned int v47; // [rsp+F8h] [rbp+77h]

  v44 = a2;
  v6 = *(_OWORD *)a3;
  v37 = 0;
  v7 = *((_OWORD *)a3 + 1);
  v38 = 0;
  v9 = 0;
  v10 = 0;
  v39 = 1;
  v11 = a3;
  v41[0] = v6;
  v41[1] = v7;
  if ( a5 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v13 = 1;
    if ( a5 )
      v13 = a5;
    v12 = 35LL * a4 * v13;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v14 = v13 + 13;
  }
  else
  {
    v12 = 35LL * a4;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v13 = 1;
    v14 = 23;
  }
  v15 = v14 + v12;
  v47 = v14 + v12;
  if ( !(v14 + (_DWORD)v12) )
    return 0LL;
  v16 = (unsigned __int8 *)Win32AllocPoolZInit(v15, 0x78707355u);
  if ( v16 )
  {
    BuildDeviceHeader(v16, v15, &v37, a1, v44);
    v18 = a4;
    v19 = 0;
    if ( a4 )
    {
      v20 = v11;
      do
      {
        if ( *(_WORD *)v20 == 1 )
        {
          v21 = *((_OWORD *)v20 + 1);
          v42 = *(_OWORD *)v20;
          v43 = v21;
          v9 = BuildMainItem(v16, v47, &v37, &v42, (__int64)v41, v36, &v39, &v38);
          if ( !v9 )
            goto LABEL_41;
          v10 += v38;
          v18 = a4;
        }
        ++v19;
        v20 = (struct tagUSAGE_PROPERTIES *)((char *)v20 + 32);
      }
      while ( v19 < v18 );
      if ( v9 )
      {
        v17 = v37;
        v22 = v13 - 1;
        v40 = v37;
        v23 = 0;
        v16[v37] = -64;
        v24 = v17 + 1;
        v37 = v17 + 1;
        if ( v13 != 1 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
LABEL_27:
              v11 = a3;
              v37 = v24;
              goto LABEL_28;
            }
            if ( (unsigned int)v17 <= gulCollectionOffset )
              goto LABEL_25;
            v25 = v17 - gulCollectionOffset + 1;
            if ( v47 - v24 <= v25 )
              break;
            memmove(&v16[v24], &v16[gulCollectionOffset], v25);
            v17 = v40;
            v22 = v13 - 1;
            v24 += v25;
            v9 = 1;
LABEL_26:
            if ( ++v23 >= v22 )
              goto LABEL_27;
          }
          v22 = v13 - 1;
LABEL_25:
          v9 = 0;
          goto LABEL_26;
        }
LABEL_28:
        v26 = a4;
        v27 = 0;
        v28 = v13 * v10;
        do
        {
          if ( !*(_WORD *)v11 )
          {
            v29 = *((_OWORD *)v11 + 1);
            v42 = *(_OWORD *)v11;
            v43 = v29;
            v9 = BuildMainItem(v16, v47, &v37, &v42, (__int64)v41, v36, &v39, &v38);
            if ( !v9 )
              goto LABEL_41;
            v28 += v38;
            v26 = a4;
          }
          ++v27;
          v11 = (struct tagUSAGE_PROPERTIES *)((char *)v11 + 32);
        }
        while ( v27 < v26 );
        if ( v9 )
        {
          if ( (v28 & 7) != 0 )
          {
            v30 = v37;
            v16[v37] = 117;
            v16[v30 + 1] = 8 - (v28 & 7);
            v31 = v30 + 2;
            v16[v31] = -107;
            v32 = (unsigned int)(v31 + 1);
            v16[v32] = 1;
            v33 = (unsigned int)(v32 + 1);
            v16[v33] = -127;
            LODWORD(v33) = v33 + 1;
            v16[(unsigned int)v33] = 3;
            v17 = (unsigned int)(v33 + 1);
          }
          else
          {
            v17 = v37;
          }
          v16[(unsigned int)v17] = -64;
          if ( gpfnHidP_GetCollectionDescription )
            CollectionDescription = gpfnHidP_GetCollectionDescription(v16, v17 + 1, PagedPool, a6);
          else
            CollectionDescription = -1073741637;
          v9 = CollectionDescription >= 0;
        }
      }
    }
LABEL_41:
    Win32FreePool((__int64)v16, v17, 0LL);
  }
  return v9;
}
