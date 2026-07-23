/*
 * XREFs of __splitpath @ 0x4B2F71D0
 * Callers:
 *     <none>
 * Callees:
 *     _splitpath_helper @ 0x4B2F721C (_splitpath_helper.c)
 */

void __cdecl _splitpath(const char *FullPath, char *Drive, char *Dir, char *Filename, char *Ext)
{
  splitpath_helper(
    FullPath,
    Drive,
    Drive != 0 ? 3 : 0,
    Dir,
    Dir != 0 ? 0x100 : 0,
    Filename,
    Filename != 0 ? 0x100 : 0,
    Ext,
    Ext != 0 ? 0x100 : 0);
}
