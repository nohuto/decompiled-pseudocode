/*
 * XREFs of _NtGdiEudcLoadUnloadLink@28 @ 0x1F93F9
 * Callers:
 *     <none>
 * Callees:
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 */

int __stdcall NtGdiEudcLoadUnloadLink(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        int a7)
{
  char *v7; // ebx
  char *v8; // esi
  int v9; // ecx
  int LinkW; // eax
  const unsigned __int16 *MaxCount; // [esp+14h] [ebp-74h]
  int v13; // [esp+24h] [ebp-64h]
  _WORD v14[36]; // [esp+28h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v7 = Src;
  v13 = 0;
  if ( a2 <= 0x20 && a3 && a4 && a4 <= 0x123 )
  {
    MaxCount = (const unsigned __int16 *)(2 * a4);
    v8 = (char *)AllocFreeTmpBuffer(2 * a4 + 2);
    if ( v8 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( Src )
      {
        if ( a2 )
        {
          if ( ((unsigned __int8)Src & 1) != 0 )
            goto LABEL_9;
          if ( (unsigned int)&Src[a2] > _MmUserProbeAddress || &Src[a2] < Src )
            *(_BYTE *)_MmUserProbeAddress = 0;
        }
        memcpy(v14, Src, 2 * a2);
        if ( 2 * a2 >= 0x42 )
          __report_rangecheckfailure();
        v14[a2] = 0;
        v7 = (char *)v14;
      }
      if ( (a3 & 1) != 0 )
LABEL_9:
        ExRaiseDatatypeMisalignment();
      if ( a4 + a3 > _MmUserProbeAddress || a4 + a3 < a3 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v8, (const void *)a3, (size_t)MaxCount);
      *(_WORD *)&v8[(_DWORD)MaxCount] = 0;
      ms_exc.registration.TryLevel = -2;
      if ( a7 )
        LinkW = GreEudcLoadLinkW((size_t)v7, (unsigned int)v7, MaxCount, (const wchar_t *)v8, v9, a5, a6);
      else
        LinkW = GreEudcUnloadLinkW(v7, (int)v8, v9);
      v13 = LinkW;
      FreeTmpBuffer(v8);
    }
    return v13;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
