/*
 * XREFs of ?UMPDDrvDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z @ 0x20B5B6
 * Callers:
 *     <none>
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

int __stdcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, void *a4)
{
  UMPDOBJ *v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  char *KernelPtr; // eax
  size_t v10; // [esp-4h] [ebp-60h]
  ULONG *v11; // [esp+0h] [ebp-5Ch]
  int v12; // [esp+10h] [ebp-4Ch] BYREF
  UMPDOBJ *v13; // [esp+14h] [ebp-48h] BYREF
  size_t MaxCount; // [esp+18h] [ebp-44h]
  _DWORD Src[2]; // [esp+1Ch] [ebp-40h] BYREF
  int v16; // [esp+24h] [ebp-38h]
  int v17; // [esp+28h] [ebp-34h]
  int v18; // [esp+2Ch] [ebp-30h]
  int v19; // [esp+30h] [ebp-2Ch]
  unsigned int v20; // [esp+34h] [ebp-28h]
  unsigned int v21; // [esp+38h] [ebp-24h]
  void *v22; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v16 = 0;
  v17 = 0;
  v22 = 0;
  v12 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v13);
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v4 = v13;
  if ( !v13 )
    goto LABEL_15;
  v5 = *((_DWORD *)a1 + 277);
  Src[0] = 36;
  Src[1] = 13;
  v18 = *(_DWORD *)v13;
  v19 = v5;
  v20 = a2;
  v21 = a3;
  if ( a2 == 2 )
  {
    v6 = 1;
  }
  else
  {
    v6 = *((_DWORD *)a1 + 351);
    if ( v6 < 1 || v6 > 8 )
    {
      v7 = 0;
      goto LABEL_8;
    }
  }
  v7 = dword_251CFC[v6];
LABEL_8:
  if ( !v7
    || (MaxCount = ((v7 * (unsigned int)*((unsigned __int16 *)a1 + 704) + 31) >> 3) & 0x1FFFFFFC,
        ULongLongToULong(*((unsigned __int16 *)a1 + 705) * (unsigned __int64)MaxCount, v11) < 0)
    || (v22 = UMPDOBJ::_AllocUserMem(v4, (char *)MaxCount, 0)) == 0
    || UMPDOBJ::Thunk(v4, Src, 0x24u, &v12, (char *)4) == -1 )
  {
LABEL_15:
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v13);
    return 0;
  }
  if ( v22 )
  {
    ms_exc.registration.TryLevel = 0;
    v10 = MaxCount;
    KernelPtr = UMPDOBJ::GetKernelPtr(v4, (char *)v22);
    memcpy(a4, KernelPtr, v10);
    ms_exc.registration.TryLevel = -2;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v13);
  return v12;
}
