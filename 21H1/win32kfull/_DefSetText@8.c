/*
 * XREFs of _DefSetText@8 @ 0x1E45A
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserDefSetText@8 @ 0xC0E70 (_NtUserDefSetText@8.c)
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _DesktopVerifyHeapLargeUnicodeString@8 @ 0x1D74A (_DesktopVerifyHeapLargeUnicodeString@8.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QAEPAGPAG@Z @ 0x1E61C (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QAEPAGPAG@Z.c)
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     _DwmAsyncTextChange@8 @ 0x1EC70 (_DwmAsyncTextChange@8.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall DefSetText(int *a1, int *a2)
{
  ULONG v2; // edi
  int v4; // esi
  int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v8; // ecx
  void *v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  ULONG v13; // ecx
  int v14; // ecx
  void *v16; // eax
  unsigned int *StrName; // eax
  _BYTE v18[12]; // [esp+14h] [ebp-3Ch] BYREF
  int v19; // [esp+24h] [ebp-2Ch]
  int *v20; // [esp+28h] [ebp-28h]
  ULONG BytesInMultiByteString; // [esp+2Ch] [ebp-24h]
  int v22; // [esp+30h] [ebp-20h]
  ULONG BytesInUnicodeString; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v2 = (ULONG)a2;
  BytesInMultiByteString = (ULONG)a2;
  v20 = a1;
  v4 = 0;
  BytesInUnicodeString = 0;
  v22 = a1[3];
  if ( !v22 || !a2 || !a2[2] )
  {
    *(_DWORD *)(a1[5] + 116) = 0;
    goto LABEL_20;
  }
  v5 = *a2;
  if ( *(_DWORD *)v2 >= 0x3FFFFFFEu )
  {
    *(_DWORD *)(a1[5] + 116) = 0;
    goto LABEL_21;
  }
  if ( *(int *)(v2 + 4) < 0 )
    v6 = 2 * v5;
  else
    v6 = v5 & 0xFFFFFFFE;
  v7 = v6 + 2;
  BytesInUnicodeString = v7;
  v8 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 25);
  if ( a1[25] )
  {
    memset(v18, 0, sizeof(v18));
    StrName = (unsigned int *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                                v8,
                                (struct _LARGE_UNICODE_STRING *)v18);
    DesktopVerifyHeapLargeUnicodeString(v22, StrName);
    v7 = BytesInUnicodeString;
    v2 = BytesInMultiByteString;
    v8 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 25);
  }
  if ( (*(_DWORD *)(a1[5] + 120) & 0x7FFFFFFFu) < v7 )
  {
    v9 = *(void **)v8;
    if ( v9 )
    {
      RtlFreeHeap(*(PVOID *)(v22 + 64), 0, v9);
      v7 = BytesInUnicodeString;
    }
    v10 = DesktopAlloc(v22, v7, 4);
    tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(v10);
    *(_DWORD *)(a1[5] + 116) = 0;
    if ( !*v11 )
    {
      *(_DWORD *)(a1[5] + 120) &= 0x80000000;
      goto LABEL_21;
    }
    *(_DWORD *)(a1[5] + 120) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1[5] + 120)) & 0x7FFFFFFF;
    v7 = BytesInUnicodeString;
  }
  v12 = 1;
  v22 = 1;
  v13 = *(_DWORD *)v2;
  BytesInMultiByteString = v13;
  if ( v13 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( *(int *)(v2 + 4) < 0 )
    {
      v22 = RtlMultiByteToUnicodeN(
              (PWCH)a1[25],
              v7,
              &BytesInUnicodeString,
              *(const CHAR **)(v2 + 8),
              BytesInMultiByteString) >= 0;
      v19 = v22;
      v7 = BytesInUnicodeString + 2;
      BytesInUnicodeString += 2;
    }
    else
    {
      memcpy((void *)a1[25], *(const void **)(v2 + 8), v13);
      v7 = BytesInUnicodeString;
    }
    ms_exc.registration.TryLevel = -2;
    v12 = v22;
  }
  v14 = a1[5];
  if ( v12 )
  {
    *(_DWORD *)(v14 + 116) = v7 - 2;
    *(_WORD *)(a1[25] + 2 * (*(_DWORD *)(a1[5] + 116) >> 1)) = 0;
LABEL_20:
    v4 = 1;
    goto LABEL_21;
  }
  *(_DWORD *)(v14 + 116) = 0;
LABEL_21:
  if ( IsToplevelWindowDesktopComposed(a1) )
  {
    v16 = (void *)ReferenceDwmApiPort();
    DwmAsyncTextChange(v16);
  }
  return v4;
}
