/*
 * XREFs of ?GetProcessSessionFonts@@YGJPAU_EPROCESS@@IIPAI1PAPAXPAG@Z @ 0x989AE
 * Callers:
 *     _NtGdiGetProcessSessionFonts@20 @ 0x987AE (_NtGdiGetProcessSessionFonts@20.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x181887 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?PffDuplicateFileHandle@@YGJPAVPFF@@PAU_EPROCESS@@1PAPAX@Z @ 0x1D04F3 (-PffDuplicateFileHandle@@YGJPAVPFF@@PAU_EPROCESS@@1PAPAX@Z.c)
 */

int __userpurge GetProcessSessionFonts@<eax>(
        unsigned int a1@<edx>,
        struct _KPROCESS *a2@<ecx>,
        struct _EPROCESS *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6,
        unsigned int *a7,
        void **a8,
        unsigned __int16 *a9)
{
  unsigned int v9; // ebx
  int v10; // esi
  struct _FONTHASH **v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  unsigned int *v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  unsigned int *v20; // esi
  struct _EPROCESS *v21; // [esp+0h] [ebp-58h]
  unsigned int *v22; // [esp+4h] [ebp-54h]
  int v23; // [esp+Ch] [ebp-4Ch] BYREF
  void *v24; // [esp+10h] [ebp-48h]
  unsigned int *v25; // [esp+14h] [ebp-44h]
  unsigned int v26; // [esp+18h] [ebp-40h]
  PRKPROCESS PROCESS; // [esp+1Ch] [ebp-3Ch]
  unsigned int v28; // [esp+20h] [ebp-38h]
  int v29; // [esp+24h] [ebp-34h]
  unsigned int v30; // [esp+28h] [ebp-30h]
  unsigned int *v31; // [esp+2Ch] [ebp-2Ch]
  _DWORD v32[2]; // [esp+30h] [ebp-28h] BYREF
  int v33; // [esp+38h] [ebp-20h] BYREF
  struct _KAPC_STATE ApcState; // [esp+3Ch] [ebp-1Ch] BYREF

  PROCESS = a2;
  v24 = a7;
  v9 = 0;
  v30 = a1;
  v10 = 0;
  *a4 = 0;
  v25 = a4;
  v26 = (unsigned int)a5;
  v23 = 0;
  *a5 = 0;
  v31 = a6;
  if ( a1 )
    memset(a6, 0, 4 * a1);
  v32[1] = PsGetCurrentProcess();
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v32[0] = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v11 = gpPFTPublic;
  v12 = 0;
  v28 = 0;
  if ( gpPFTPublic[3] )
  {
    v13 = 24;
    v29 = 24;
    do
    {
      if ( v10 != -1073741789 && v10 < 0 )
        break;
      v14 = *(int *)((char *)v11 + v13);
      if ( v14 )
      {
        do
        {
          if ( v10 != -1073741789 && v10 < 0 )
            break;
          v15 = *(_DWORD *)(v14 + 32);
          if ( (v15 & 8) == 0 && (v15 & 0x200) == 0 )
          {
            v17 = v25;
            ++*v25;
            if ( *v17 == -1
              || (ULongAdd(*(_DWORD *)v26, *(_DWORD *)(v14 + 16), (int *)v26, (unsigned int)v21, v22) & 0x80000000) != 0 )
            {
              v10 = -1073741675;
            }
            if ( v30 && v10 >= 0 )
            {
              if ( *v25 > v30 || *(_DWORD *)v26 > (unsigned int)a3 )
                v10 = -1073741789;
              if ( v10 >= 0 )
              {
                v10 = PffDuplicateFileHandle(PROCESS, (struct _EPROCESS *)&v31[*v25 - 1], v21, (void **)v22);
                if ( v10 < 0 )
                {
                  if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x2000) )
                  {
                    v23 = *(_DWORD *)(**(_DWORD **)(v14 + 120) + 48);
                    v33 = v10;
                    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                      v18,
                      v18,
                      &v33,
                      &v23);
                  }
                }
                else
                {
                  memcpy(v24, *(const void **)(**(_DWORD **)(v14 + 120) + 48), 2 * *(_DWORD *)(v14 + 16));
                  v24 = (char *)v24 + 2 * *(_DWORD *)(v14 + 16);
                }
              }
            }
          }
          v14 = *(_DWORD *)(v14 + 4);
        }
        while ( v14 );
        v13 = v29;
        v12 = v28;
        v23 = v10;
      }
      v11 = gpPFTPublic;
      ++v12;
      v13 += 4;
      v28 = v12;
      v29 = v13;
    }
    while ( v12 < (unsigned int)gpPFTPublic[3] );
  }
  SEMOBJ::vUnlock((SEMOBJ *)v32);
  KeUnstackDetachProcess(&ApcState);
  if ( v10 < 0 )
  {
    v19 = v30;
    if ( v30 )
    {
      v20 = v31;
      do
      {
        if ( !v20[v9] )
          break;
        NtClose((HANDLE)v20[v9++]);
      }
      while ( v9 < v19 );
      v10 = v23;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v32);
  return v10;
}
