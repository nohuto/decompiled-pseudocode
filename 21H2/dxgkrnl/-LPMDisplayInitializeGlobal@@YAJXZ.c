/*
 * XREFs of ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C0307C60
 * Callers:
 *     DriverEntry @ 0x1C0307D3C (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

NTSTATUS LPMDisplayInitializeGlobal(void)
{
  char *v0; // rax
  struct _ERESOURCE *v1; // rax

  qword_1C00B31A8 = 0LL;
  v0 = (char *)operator new[](0xA8uLL, 0x4B677844u, PagedPool);
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    *((_QWORD *)v0 + 1) = 0LL;
    *((_QWORD *)v0 + 2) = 0LL;
    *((_DWORD *)v0 + 6) = -1;
    *((_DWORD *)v0 + 7) = 0;
    *((_DWORD *)v0 + 8) = 0;
    *((_DWORD *)v0 + 9) = 0;
    *((_DWORD *)v0 + 10) = 0;
    *((_DWORD *)v0 + 11) = 0;
    *((_DWORD *)v0 + 12) = 0;
    *((_DWORD *)v0 + 15) = 0;
    *((_DWORD *)v0 + 13) = 2;
    *((_DWORD *)v0 + 14) = 1;
    *((_OWORD *)v0 + 4) = 0LL;
    *((_OWORD *)v0 + 5) = 0LL;
    *((_OWORD *)v0 + 6) = 0LL;
    *((_DWORD *)v0 + 28) = 0;
    *(_OWORD *)(v0 + 136) = 0LL;
    *(_OWORD *)(v0 + 152) = 0LL;
  }
  FileObject = (PFILE_OBJECT *)v0;
  if ( v0 && (v1 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512), (Resource = v1) != 0LL) )
    return ExInitializeResourceLite(v1);
  else
    return -1073741801;
}
