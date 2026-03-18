/*
 * XREFs of ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446
 * Callers:
 *     ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A (--$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z.c)
 *     ??$CommitUMBuffer@U_LOADFONTFILEPARAMETERS@@@UmfdTls@@QAEXPAPAU_LOADFONTFILEPARAMETERS@@II_N@Z @ 0xDC12C (--$CommitUMBuffer@U_LOADFONTFILEPARAMETERS@@@UmfdTls@@QAEXPAPAU_LOADFONTFILEPARAMETERS@@II_N@Z.c)
 *     ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@II_N@Z @ 0x24A9FD (--$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARA.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B09A (-CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@FreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B3BE (-CreateUsermodeParameters@FreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B431 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B4E8 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B6F0 (-CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@UnloadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B765 (-CreateUsermodeParameters@UnloadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?CommitReservedBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x8C4B6 (-CommitReservedBuffer@UmfdUMBuffer@@AAE_NK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x24B7D4 (-AllocTemporaryBuffer@UmfdUMBuffer@@AAE_NK@Z.c)
 */

void *__thiscall UmfdTls::CommitUMBuffer(UmfdTls *this, size_t Size, bool a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  void *v5; // esi
  PVOID BaseAddress; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  v3 = *(_DWORD *)this;
  v4 = Size;
  if ( Size > *(_DWORD *)(*(_DWORD *)this + 20) )
  {
    if ( UmfdUMBuffer::AllocTemporaryBuffer((UmfdUMBuffer *)v3, Size) )
    {
      v5 = *(void **)(v3 + 4);
      goto LABEL_6;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v3 + 4) )
  {
    BaseAddress = *(PVOID *)(v3 + 4);
    Size = 0;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &Size, 0x8000u);
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
  }
  if ( !UmfdUMBuffer::CommitReservedBuffer((UmfdUMBuffer *)v3, v4) )
  {
LABEL_10:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = *(void **)(v3 + 12);
LABEL_6:
  *(_DWORD *)v3 = v5;
  if ( v5 && a3 )
  {
    memset(v5, 0, v4);
    ms_exc.registration.TryLevel = -2;
  }
  return v5;
}
