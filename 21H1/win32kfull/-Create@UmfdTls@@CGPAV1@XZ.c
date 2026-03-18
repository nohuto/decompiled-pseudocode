/*
 * XREFs of ?Create@UmfdTls@@CGPAV1@XZ @ 0xE91AE
 * Callers:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 * Callees:
 *     ?Create@UmfdUMBuffer@@SGPAV1@XZ @ 0xE91E8 (-Create@UmfdUMBuffer@@SGPAV1@XZ.c)
 */

struct UmfdTls *__stdcall UmfdTls::Create()
{
  _DWORD *v0; // esi
  struct UmfdUMBuffer *v1; // eax

  v0 = EngAllocMem(0, 0x1Cu, 0x6C744446u);
  if ( !v0 )
    return (struct UmfdTls *)v0;
  memset(v0, 0, 0x1Cu);
  v0[1] = -1;
  v1 = UmfdUMBuffer::Create();
  *v0 = v1;
  if ( v1 )
    return (struct UmfdTls *)v0;
  EngFreeMem(v0);
  return 0;
}
