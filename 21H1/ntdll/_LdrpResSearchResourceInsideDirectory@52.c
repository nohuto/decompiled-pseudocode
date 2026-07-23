/*
 * XREFs of _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _LdrpSectionTableFromVirtualAddress@24 @ 0x4B2B8182 (_LdrpSectionTableFromVirtualAddress@24.c)
 *     _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8 (_LdrpResCompareResourceNames@32.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlULongPtrSub@12 @ 0x4B2EB904 (_RtlULongPtrSub@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _wcsncmp @ 0x4B2FA7E0 (_wcsncmp.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 */

int __fastcall LdrpResSearchResourceInsideDirectory(
        int a1,
        void *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        wchar_t **a7,
        int a8,
        __int16 *a9,
        unsigned int *a10,
        unsigned int *a11,
        int a12,
        _WORD *a13)
{
  int v13; // ebx
  int v14; // ecx
  unsigned int v15; // esi
  wchar_t **v16; // edx
  _DWORD *SharedData; // eax
  int v18; // eax
  char v19; // dl
  int v20; // edi
  unsigned int *v21; // ecx
  int v22; // eax
  int v23; // eax
  bool v24; // dl
  int v25; // ecx
  unsigned int v26; // edx
  bool v27; // al
  int v28; // eax
  int *v29; // edi
  unsigned __int16 *v30; // eax
  int v31; // ebx
  int v32; // ebx
  int v33; // eax
  wchar_t *v34; // edx
  int v35; // ecx
  int result; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edx
  unsigned int v41; // esi
  unsigned int v42; // edi
  unsigned int v43; // edx
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // eax
  int v49; // edi
  unsigned int v50; // ecx
  int v51; // edi
  unsigned int *v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned __int16 *v55; // ebx
  _DWORD *v56; // eax
  int v57; // eax
  int v58; // eax
  unsigned int v59; // eax
  int v60; // edi
  int v61; // ecx
  __int16 v62; // ax
  unsigned int v63; // ebx
  int v64; // ebx
  unsigned int v65; // eax
  int v66; // eax
  unsigned int v67; // ebx
  int v68; // eax
  int v69; // ecx
  unsigned int v70; // ebx
  int v71; // eax
  unsigned __int16 *v72; // eax
  unsigned int v73; // ebx
  int v74; // edx
  int v75; // eax
  ULONG v76; // esi
  unsigned __int16 *Heap; // eax
  int v78; // eax
  int v79; // eax
  SIZE_T v80; // [esp-4h] [ebp-318h]
  _DWORD v81[2]; // [esp+10h] [ebp-304h] BYREF
  unsigned int *v82; // [esp+1Ch] [ebp-2F8h]
  int v83; // [esp+20h] [ebp-2F4h]
  unsigned __int16 *v84; // [esp+24h] [ebp-2F0h]
  unsigned int v85; // [esp+28h] [ebp-2ECh]
  wchar_t **v86; // [esp+2Ch] [ebp-2E8h]
  unsigned __int16 *v87; // [esp+30h] [ebp-2E4h] BYREF
  signed __int16 *v88; // [esp+34h] [ebp-2E0h]
  int v89; // [esp+38h] [ebp-2DCh]
  unsigned __int16 v90; // [esp+3Ch] [ebp-2D8h] BYREF
  int v91; // [esp+40h] [ebp-2D4h]
  int v92; // [esp+44h] [ebp-2D0h]
  int v93; // [esp+48h] [ebp-2CCh]
  unsigned __int16 *v94; // [esp+4Ch] [ebp-2C8h]
  __int64 v95; // [esp+50h] [ebp-2C4h] BYREF
  _WORD *v96; // [esp+58h] [ebp-2BCh]
  signed __int16 v97; // [esp+5Ch] [ebp-2B8h]
  unsigned int *v98; // [esp+60h] [ebp-2B4h]
  int v99; // [esp+64h] [ebp-2B0h]
  wchar_t **v100; // [esp+68h] [ebp-2ACh]
  unsigned int v101; // [esp+6Ch] [ebp-2A8h]
  int v102; // [esp+70h] [ebp-2A4h]
  int v103; // [esp+74h] [ebp-2A0h]
  int v104; // [esp+78h] [ebp-29Ch]
  HANDLE Handle; // [esp+7Ch] [ebp-298h]
  char *v106; // [esp+80h] [ebp-294h]
  int v107; // [esp+84h] [ebp-290h] BYREF
  int v108; // [esp+88h] [ebp-28Ch]
  unsigned int v109; // [esp+8Ch] [ebp-288h]
  int v110; // [esp+90h] [ebp-284h]
  unsigned __int16 *v111; // [esp+94h] [ebp-280h]
  __int16 v112; // [esp+98h] [ebp-27Ch]
  int v113; // [esp+9Ch] [ebp-278h]
  wchar_t *String1; // [esp+A0h] [ebp-274h]
  bool v115; // [esp+A7h] [ebp-26Dh]
  unsigned int *v116; // [esp+A8h] [ebp-26Ch]
  int v117; // [esp+ACh] [ebp-268h]
  unsigned int *v118; // [esp+B0h] [ebp-264h]
  int v119; // [esp+B4h] [ebp-260h]
  int v120; // [esp+B8h] [ebp-25Ch]
  int v121; // [esp+BCh] [ebp-258h]
  unsigned int v122; // [esp+C0h] [ebp-254h] BYREF
  bool v123; // [esp+C7h] [ebp-24Dh]
  PVOID BaseAddress; // [esp+C8h] [ebp-24Ch]
  int v125; // [esp+CCh] [ebp-248h]
  _BYTE v126[16]; // [esp+D0h] [ebp-244h] BYREF
  _DWORD Buffer[3]; // [esp+E0h] [ebp-234h] BYREF
  int v128; // [esp+ECh] [ebp-228h]
  _BYTE v129[520]; // [esp+F0h] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2FCh] [ebp-18h]

  Handle = a2;
  v13 = a1;
  v104 = a1;
  v14 = a3;
  v120 = a3;
  v15 = a4;
  v121 = a4;
  v91 = a5;
  v92 = a6;
  v16 = a7;
  v100 = a7;
  v88 = a9;
  v98 = a10;
  v82 = a11;
  v96 = a13;
  memset(Buffer, 0, sizeof(Buffer));
  v128 = 0;
  v97 = 0;
  String1 = 0;
  BaseAddress = 0;
  v112 = 0;
  LODWORD(v95) = 5636180;
  HIDWORD(v95) = L"LdrpResSearchResourceInsideDirectory Enter";
  v81[0] = 5505106;
  v81[1] = L"LdrpResSearchResourceInsideDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v18 = 2147353477;
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v75 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v75 = 2147353476;
    LdrpTraceLoadMUIDll(&v95, *(unsigned __int8 *)v75);
    v14 = v120;
    v16 = v100;
  }
  if ( !a4 )
    return -1073741811;
  if ( !a5 )
    return -1073741811;
  if ( !v16 )
    return -1073741811;
  if ( (unsigned int)(a8 - 1) > 3 )
    return -1073741811;
  v19 = a12;
  v113 = a12;
  if ( (a12 & 0x8000) != 0 && (!Handle || Handle == (HANDLE)-1 || !v92) )
    return -1073741811;
  v20 = a12 & 0x1000;
  v117 = v20;
  LOBYTE(v103) = v20 != 0;
  v123 = (a12 & 0x8800) == 34816;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return -1073741811;
  if ( (a12 & 0x8800) != 0x8800 && !v13 || (a12 & 0x8800) == 34816 && !Handle )
    return -1073741811;
  v86 = v100;
  v99 = a8;
  v21 = 0;
  v118 = 0;
  v116 = 0;
  v101 = 0;
  HIWORD(v22) = HIWORD(v96);
  if ( v96 )
  {
    *v96 = 0;
    v20 = v117;
  }
  ms_exc.registration.TryLevel = 0;
  LOWORD(v22) = v112;
  v93 = v22;
  v119 = v107;
LABEL_17:
  if ( !v15 )
    goto LABEL_71;
  v23 = v99--;
  v83 = v99;
  v19 = v113;
  if ( !v23 )
    goto LABEL_71;
  String1 = *v100;
  if ( !v99 && a8 == 3 )
  {
    v101 = v15;
    if ( !v88 )
    {
      v125 = -1073741811;
      goto LABEL_107;
    }
    v97 = *v88;
    v93 = 0;
    v112 = 0;
    if ( (~(_BYTE)v113 & 4) != 0 )
      String1 = (wchar_t *)(unsigned __int16)v88[2];
  }
  v24 = v123;
  if ( v123 )
  {
    result = LdrpResReadFile(Handle, Buffer, 0x10u);
    v125 = result;
    if ( result < 0 )
      goto LABEL_262;
    v24 = v123;
    if ( v123 )
      goto LABEL_217;
  }
  if ( v20 )
  {
    if ( v15 + 24 < v15 )
      goto LABEL_220;
    v122 = v15 + 24;
    if ( v15 + 24 > v120 + (v13 & 0xFFFFFFFC) )
      goto LABEL_219;
  }
  if ( v24 )
LABEL_217:
    v25 = (unsigned __int16)v128;
  else
    v25 = *(unsigned __int16 *)(v15 + 12);
  v110 = v25;
  v102 = v25;
  if ( v25 && v20 )
  {
    if ( (int)RtlULongLongToUInt(8 * v25, (unsigned int)v25 >> 29) < 0 )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    v60 = v89;
    if ( (RtlULongPtrAdd(v15, v89 + 16, (int *)&v122) & 0x80000000) != 0 )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    if ( v15 + v60 + 16 > v120 + (v13 & 0xFFFFFFFC) )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    v25 = v110;
    v20 = v117;
  }
  v26 = v15 + 16;
  v106 = (char *)(v15 + 16);
  v94 = (unsigned __int16 *)(v15 + 16);
  if ( ((unsigned int)String1 & 0xFFFF0000) != 0 )
    goto LABEL_36;
  if ( v25 )
  {
    if ( v20 )
    {
      if ( (RtlULongPtrAdd((unsigned int)v106, v25, (int *)&v122) & 0x80000000) != 0 )
      {
        v125 = -1073741701;
        goto LABEL_107;
      }
      v25 = v110;
      v26 = (unsigned int)v106;
    }
    v26 += 8 * v25;
    v106 = (char *)v26;
    v94 = (unsigned __int16 *)v26;
  }
  v27 = v123;
  if ( v123 )
    v25 = HIWORD(v128);
  else
    v25 = *(unsigned __int16 *)(v15 + 14);
  v110 = v25;
  v102 = v25;
  if ( v20 )
  {
    v28 = 8 * v25;
    v95 = 8LL * (unsigned int)v25;
    if ( !is_mul_ok(8u, v25) )
    {
      v89 = -1;
      v125 = -1073741701;
      goto LABEL_107;
    }
    v89 = 8 * v25;
    v26 = (unsigned int)v106;
    if ( &v106[v28] < v106 )
      goto LABEL_220;
    v122 = (unsigned int)&v106[v28];
    if ( (unsigned int)&v106[v28] > v120 + (v13 & 0xFFFFFFFC) )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    v25 = v110;
LABEL_36:
    v27 = v123;
  }
  if ( !v25 )
  {
    v109 = 0;
LABEL_132:
    switch ( a8 - v99 )
    {
      case 1:
        v125 = -1073741686;
        break;
      case 2:
        v125 = -1073741685;
        break;
      case 3:
        v125 = -1073741308;
        break;
      default:
        v125 = -1073741811;
        break;
    }
    goto LABEL_107;
  }
  if ( v27 )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0;
      v25 = v102;
    }
    v76 = 8 * v25;
    LODWORD(v80) = 8 * v25;
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v80);
    v55 = Heap;
    BaseAddress = Heap;
    if ( !Heap )
    {
      v125 = -1073741801;
      goto LABEL_108;
    }
    result = LdrpResReadFile(Handle, Heap, v76);
    v125 = result;
    if ( result < 0 )
      goto LABEL_262;
    v26 = (unsigned int)v55;
    v106 = (char *)v55;
    v94 = v55;
    HIWORD(v78) = HIWORD(a12);
    v113 = a12;
    LOWORD(v78) = v112;
    v93 = v78;
    v100 = v86;
    v99 = v83;
    v118 = v116;
    v25 = v102;
    v110 = v102;
    v119 = v107;
  }
LABEL_39:
  if ( v101 && (v113 & 0x20) != 0 )
  {
    v15 = 0;
    v109 = 0;
    if ( v20 )
    {
      if ( (RtlULongPtrAdd(v121, *(_DWORD *)(v26 + 4), (int *)&v122) & 0x80000000) != 0 )
      {
        v125 = -1073741701;
        goto LABEL_107;
      }
      v21 = (unsigned int *)v122;
      v116 = (unsigned int *)v122;
      v26 = (unsigned int)v106;
    }
    else
    {
      v21 = (unsigned int *)(v121 + *(_DWORD *)(v26 + 4));
      v116 = v21;
    }
    v118 = v21;
    String1 = *(wchar_t **)v26;
    v19 = v113;
    goto LABEL_70;
  }
  while ( 2 )
  {
    v15 = 0;
    v109 = 0;
    v29 = (int *)v26;
    v94 = (unsigned __int16 *)v26;
    v30 = (unsigned __int16 *)(v26 + 8 * (v25 - 1));
    v84 = v30;
LABEL_41:
    v102 = v25;
    while ( 1 )
    {
      if ( v29 > (int *)v30 )
        goto LABEL_60;
      v31 = v25 >> 1;
      if ( !(v25 >> 1) )
      {
        if ( !v25 )
          goto LABEL_60;
        v115 = (v113 & 0x8800) == 34816;
        if ( v29 )
        {
          v32 = 0;
          v108 = 0;
          v33 = *v29;
          v34 = String1;
          if ( ((unsigned int)String1 & 0xFFFF0000) != 0 )
          {
            if ( v33 < 0 )
            {
              v71 = v33 & 0x7FFFFFFF;
              HIDWORD(v95) = v71;
              if ( (v113 & 0x1000) != 0 )
              {
                if ( (RtlULongPtrAdd(v121, v71, (int *)&v87) & 0x80000000) != 0 )
                {
                  v32 = -1073741701;
                  v108 = -1073741701;
                  v35 = v119;
                  goto LABEL_52;
                }
                if ( v121 + HIDWORD(v95) > v120 + (v104 & 0xFFFFFFFC) )
                {
                  v32 = -1073741701;
                  v108 = -1073741701;
                  v35 = v119;
                  goto LABEL_52;
                }
                v72 = v87;
                v34 = String1;
              }
              else
              {
                v72 = (unsigned __int16 *)(v121 + v71);
                v87 = v72;
              }
              v111 = v72;
              if ( v115 )
              {
                result = LdrpResReadFile(Handle, &v90, 2u);
                v32 = result;
                v108 = result;
                if ( result < 0 )
                {
                  v125 = result;
                  v35 = v119;
                  goto LABEL_53;
                }
                if ( (unsigned int)v90 + 3 > 0x104 )
                {
                  v32 = -1073741701;
                  v108 = -1073741701;
                  v35 = v119;
                  goto LABEL_52;
                }
                result = LdrpResReadFile(Handle, v129, 2 * v90 + 2);
                v32 = result;
                v108 = result;
                if ( result < 0 )
                {
                  v125 = result;
                  v35 = v119;
                  goto LABEL_53;
                }
                v72 = (unsigned __int16 *)v129;
                v111 = (unsigned __int16 *)v129;
                v34 = String1;
              }
              if ( ((unsigned int)(v72 + 1) & 0xFFFF0000) == 0 )
              {
                v32 = -1073741701;
                v108 = -1073741701;
                v35 = v119;
                goto LABEL_52;
              }
              LODWORD(v80) = *v72;
              v35 = wcsncmp(v34, v72 + 1, v80);
              v119 = v35;
              if ( !v35 )
              {
                if ( wcslen(String1) != *v111 )
                  goto LABEL_256;
                v35 = v119;
              }
              v107 = v35;
              goto LABEL_52;
            }
            v35 = -1;
          }
          else
          {
            if ( v33 >= 0 )
            {
              if ( (v113 & 0x1000) == 0 || (v33 & 0xFFFF0000) == 0 )
              {
                v35 = (int)String1 - v33;
                goto LABEL_51;
              }
              v32 = -1073741701;
              v108 = -1073741701;
              v35 = v119;
LABEL_52:
              result = v32;
              v125 = v32;
LABEL_53:
              if ( v32 < 0 )
                goto LABEL_262;
              if ( v35 )
                goto LABEL_60;
              v37 = v29[1];
              if ( v37 < 0 )
              {
LABEL_56:
                if ( v117 )
                {
                  if ( v101 )
                  {
                    v125 = -1073741701;
                    goto LABEL_107;
                  }
                  v38 = v37 & 0x7FFFFFFF;
                  v15 = v121 + v38;
                  if ( v121 + v38 < (unsigned int)v121 )
                    goto LABEL_220;
                  v122 = v121 + v38;
                  v109 = v121 + v38;
                }
                else
                {
                  v15 = v121 + (v37 & 0x7FFFFFFF);
                  v109 = v15;
                }
                goto LABEL_60;
              }
              if ( v117 )
              {
                if ( !v101 )
                  goto LABEL_219;
                v59 = v121 + v37;
                v118 = (unsigned int *)v59;
                if ( v59 >= v121 )
                {
                  v122 = v59;
                  goto LABEL_130;
                }
LABEL_220:
                v122 = -1;
                v125 = -1073741701;
                goto LABEL_107;
              }
LABEL_243:
              v59 = v121 + v37;
              goto LABEL_242;
            }
            if ( (v113 & 0x1000) != 0 && (v33 & 0xFFFF0000) == 0 )
            {
              v32 = -1073741701;
              v108 = -1073741701;
              v35 = v119;
              goto LABEL_52;
            }
LABEL_256:
            v35 = 1;
          }
LABEL_51:
          v107 = v35;
          v119 = v35;
          goto LABEL_52;
        }
        result = -1073741811;
        v125 = -1073741811;
LABEL_262:
        ms_exc.registration.TryLevel = -2;
        return result;
      }
      LOBYTE(v25) = v25 & 1;
      HIDWORD(v95) = v25;
      v58 = (int)&v29[2 * v31];
      v111 = (unsigned __int16 *)v58;
      if ( !(_BYTE)v25 )
      {
        v58 -= 8;
        v111 = (unsigned __int16 *)v58;
      }
      result = LdrpResCompareResourceNames(v120, String1, v121, v58, v113, (int)&v107);
      v125 = result;
      if ( result < 0 )
        goto LABEL_262;
      v119 = v107;
      if ( !v107 )
        break;
      if ( v107 < 0 )
      {
        v30 = v111 - 4;
        v84 = v111 - 4;
        if ( !BYTE4(v95) )
        {
          v25 = v31 - 1;
          goto LABEL_41;
        }
        v102 = v31;
        v25 = v31;
      }
      else
      {
        v29 = (int *)(v111 + 4);
        v94 = v111 + 4;
        v102 = v31;
        v30 = v84;
        v25 = v31;
      }
    }
    v37 = *((_DWORD *)v111 + 1);
    if ( v37 < 0 )
      goto LABEL_56;
    v15 = 0;
    v109 = 0;
    if ( !v117 )
      goto LABEL_243;
    if ( !v101 )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    if ( (RtlULongPtrAdd(v121, v37, (int *)&v122) & 0x80000000) != 0 )
    {
      v125 = -1073741701;
      goto LABEL_107;
    }
    v59 = v122;
LABEL_242:
    v118 = (unsigned int *)v59;
LABEL_130:
    v116 = (unsigned int *)v59;
LABEL_60:
    v19 = v113;
    if ( !v101 )
      goto LABEL_61;
    v21 = v118;
    if ( v118 )
      goto LABEL_61;
    if ( (v113 & 4) == 0 )
    {
      HIWORD(v39) = HIWORD(v93);
      LOWORD(v39) = v93 + 1;
      v93 = v39;
      v112 = v39;
      if ( (unsigned __int16)v39 < v97 )
      {
        String1 = (wchar_t *)(unsigned __int16)v88[4 * (unsigned __int16)v39 + 2];
        v25 = v110;
        v26 = (unsigned int)v106;
        continue;
      }
      if ( !*((_BYTE *)v88 + 516) )
      {
        v113 |= 0x20u;
        a12 = v113;
        v25 = v110;
        v20 = v117;
        v26 = (unsigned int)v106;
        goto LABEL_39;
      }
LABEL_61:
      v86 = ++v100;
      v13 = v104;
      v20 = v117;
      v21 = v118;
      goto LABEL_17;
    }
    break;
  }
  v20 = v117;
LABEL_70:
  v13 = v104;
LABEL_71:
  v40 = v19 & 2;
  if ( !v21 || v40 )
  {
    if ( v15 && v40 )
    {
      if ( v20 )
      {
        if ( (RtlULongPtrAdd(v15, 24, (int *)&v122) & 0x80000000) != 0 )
        {
          v109 = 0;
          goto LABEL_219;
        }
        v73 = v13 & 0xFFFFFFFC;
        v74 = v120;
        if ( v15 + 24 > v120 + v73 )
        {
          v109 = 0;
          goto LABEL_219;
        }
      }
      else
      {
        v73 = v13 & 0xFFFFFFFC;
        v74 = v120;
      }
      if ( v98 )
      {
        if ( v20 && (v15 < v73 || v15 > v73 + v74) )
          goto LABEL_219;
        *v98 = v15;
      }
      v125 = 0;
      goto LABEL_107;
    }
    goto LABEL_132;
  }
  if ( !v20 )
    goto LABEL_77;
  if ( (unsigned int)v21 <= v121 || (unsigned int)(v118 + 4) > v120 + (v13 & 0xFFFFFFFC) )
    return sub_4B3144F7(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  v21 = v118;
LABEL_77:
  if ( v96 )
    *v96 = (_WORD)String1;
  v41 = v13 & 0xFFFFFFFC;
  if ( (v13 & 1) == 0 && !v123 )
  {
    v42 = 0;
    v85 = 0;
    goto LABEL_82;
  }
  v61 = v91;
  v62 = *(_WORD *)(v91 + 24);
  if ( v62 == 267 )
  {
    v63 = *(_DWORD *)(v91 + 136);
    goto LABEL_147;
  }
  if ( v62 != 523 )
    goto LABEL_276;
  v63 = *(_DWORD *)(v91 + 152);
LABEL_147:
  if ( !v63 )
  {
LABEL_276:
    v116 = 0;
    v125 = -1073741687;
LABEL_107:
    v55 = (unsigned __int16 *)BaseAddress;
LABEL_108:
    if ( v55 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v55);
      BaseAddress = 0;
    }
    v56 = NtCurrentPeb()->SharedData;
    if ( v56 && *v56 )
      v57 = (int)NtCurrentPeb()->SharedData + 555;
    else
      v57 = 2147353477;
    if ( (*(_BYTE *)v57 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v79 = (int)NtCurrentPeb()->SharedData + 554;
      else
        v79 = 2147353476;
      LdrpTraceLoadMUIDll(v81, *(unsigned __int8 *)v79);
    }
    ms_exc.registration.TryLevel = -2;
    return v125;
  }
  if ( !v20 )
    goto LABEL_152;
  if ( (RtlULongPtrAdd(v41, v63, (int *)&v122) & 0x80000000) != 0 || (int)RtlULongPtrSub(&v122) < 0 )
    goto LABEL_219;
  v61 = v91;
LABEL_152:
  v42 = v41 + v63 - v121;
  v85 = v42;
  v64 = LdrpSectionTableFromVirtualAddress(v41, v120, v61, v92, v63, v103);
  if ( !v64 )
  {
    v116 = 0;
    goto LABEL_219;
  }
  if ( !v123 )
  {
    v21 = v118;
    goto LABEL_155;
  }
  result = LdrpResReadFile(Handle, v126, 0x10u);
  v125 = result;
  if ( result < 0 )
    goto LABEL_262;
  v21 = (unsigned int *)v126;
  v118 = (unsigned int *)v126;
  v116 = (unsigned int *)v126;
LABEL_155:
  v65 = *v21;
  if ( *v21 > *(_DWORD *)(v64 + 8) )
  {
    v96 = *(_WORD **)(v64 + 12);
    v66 = LdrpSectionTableFromVirtualAddress(v41, v120, v91, v92, v65, v103);
    if ( v66 )
    {
      v67 = *(_DWORD *)(v66 + 12);
      HIDWORD(v95) = v67;
      v68 = LdrpSectionTableFromVirtualAddress(v41, v120, v91, v92, v67, v103);
      v103 = v68;
      v69 = v117;
      if ( v68 )
      {
        if ( v117 )
        {
          if ( (RtlULongPtrAdd(v41, v67 - *(_DWORD *)(v68 + 12), (int *)&v122) & 0x80000000) != 0
            || (RtlULongPtrAdd(v122, *(_DWORD *)(v103 + 20), (int *)&v122) & 0x80000000) != 0 )
          {
            goto LABEL_219;
          }
          v68 = v103;
          v69 = v117;
        }
        v70 = v41 + HIDWORD(v95) + *(_DWORD *)(v68 + 20) - *(_DWORD *)(v68 + 12);
      }
      else
      {
        v70 = 0;
      }
      if ( v69 )
      {
        if ( (int)RtlULongPtrSub(&v122) < 0 || (int)RtlULongPtrSub(&v122) < 0 )
          goto LABEL_219;
        v68 = v103;
      }
      v42 += v121 + *(_DWORD *)(v68 + 12) - v70 - (_DWORD)v96;
      v85 = v42;
      v21 = v118;
      goto LABEL_156;
    }
    v116 = 0;
LABEL_219:
    v125 = -1073741701;
    goto LABEL_107;
  }
LABEL_156:
  v13 = v104;
LABEL_82:
  v43 = v21[1];
  v44 = v117;
  if ( !v117 )
  {
    v46 = 0;
LABEL_92:
    if ( v98 )
    {
      if ( v44 )
      {
        v48 = v46 + v41;
        if ( v46 + v41 < v41 )
        {
          v122 = -1;
          v49 = -1073741675;
          v50 = -1;
        }
        else
        {
          v122 = v46 + v41;
          v49 = 0;
          v50 = v46 + v41;
        }
        if ( v49 < 0 )
          goto LABEL_219;
        if ( v50 < v41 )
          goto LABEL_219;
        v51 = v120;
        if ( v50 > v120 + (v41 & 0xFFFFFFFC) )
          goto LABEL_219;
        v52 = v98;
        *v98 = v48;
LABEL_100:
        if ( v82 )
        {
          if ( v117 && v52 )
          {
            v53 = *v52;
            v54 = *v52 + v43;
            if ( v54 < v53 )
              goto LABEL_220;
            v122 = v54;
            if ( v54 > v51 + (v13 & 0xFFFFFFFC) )
              goto LABEL_219;
          }
          *v82 = v43;
        }
        v125 = 0;
        goto LABEL_107;
      }
      v52 = v98;
      *v98 = v41 + *v118 - v42;
    }
    else
    {
      v52 = 0;
    }
    v51 = v120;
    goto LABEL_100;
  }
  v45 = *v21;
  if ( v45 < v42 )
  {
    v122 = -1;
    v47 = -1073741675;
    v46 = -1;
  }
  else
  {
    v46 = v45 - v42;
    v122 = v46;
    v47 = 0;
  }
  if ( v47 < 0 )
    goto LABEL_219;
  if ( v46 >= v121 - v13 && v46 <= v120 && v43 && v43 <= v120 )
  {
    if ( v46 + v43 <= v120 )
    {
      v44 = v117;
      goto LABEL_92;
    }
    v116 = 0;
    goto LABEL_219;
  }
  return sub_4B3144F7(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
